#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[100];
    char batch[20];
    char membership[10];
    char regDate[11];
    char dob[11];
    char interest[10];
} Student;

// Dynamic array
Student *students = NULL;
int count = 0;
int capacity = 2;

// Load database from file
void loadDatabase(const char *filename) {
    FILE *fp = fopen(filename, "rb");
    if (!fp) return;

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    count = size / sizeof(Student);
    capacity = count > 2 ? count : 2;
    students = malloc(sizeof(Student) * capacity);

    fread(students, sizeof(Student), count, fp);
    fclose(fp);
}

// Save database to file
void saveDatabase(const char *filename) {
    FILE *fp = fopen(filename, "wb");
    if (!fp) {
        printf("Error saving database!\n");
        return;
    }
    fwrite(students, sizeof(Student), count, fp);
    fclose(fp);
}

// Check duplicate ID
int idExists(int id) {
    for (int i = 0; i < count; i++)
        if (students[i].id == id)
            return 1;
    return 0;
}

// Add student
void addStudent() {
    if (count >= capacity) {
        capacity *= 2;
        students = realloc(students, sizeof(Student) * capacity);
        if (!students) {
            printf("Memory allocation failed!\n");
            exit(1);
        }
    }

    Student s;
    printf("Enter ID: "); scanf("%d", &s.id); while(getchar()!='\n');
    if (idExists(s.id)) {
        printf("ID already exists!\n");
        return;
    }

    printf("Full Name: "); fgets(s.name,100,stdin); s.name[strcspn(s.name,"\n")]=0;
    printf("Batch (CS/SE/Cyber/AI): "); fgets(s.batch,20,stdin); s.batch[strcspn(s.batch,"\n")]=0;
    printf("Membership (IEEE/ACM): "); fgets(s.membership,10,stdin); s.membership[strcspn(s.membership,"\n")]=0;
    printf("Registration Date (YYYY-MM-DD): "); fgets(s.regDate,11,stdin); s.regDate[strcspn(s.regDate,"\n")]=0;
    printf("Date of Birth (YYYY-MM-DD): "); fgets(s.dob,11,stdin); s.dob[strcspn(s.dob,"\n")]=0;
    printf("Interest (IEEE/ACM/Both): "); fgets(s.interest,10,stdin); s.interest[strcspn(s.interest,"\n")]=0;

    students[count++] = s;
    printf("Student added successfully!\n");
}

// Display all students
void displayAll() {
    for (int i=0; i<count; i++) {
        Student s = students[i];
        printf("%d | %s | %s | %s | %s | %s | %s\n",
               s.id, s.name, s.batch, s.membership, s.regDate, s.dob, s.interest);
    }
}

// Update student
void updateStudent() {
    int id;
    printf("Enter student ID to update: "); scanf("%d",&id); while(getchar()!='\n');
    for(int i=0;i<count;i++){
        if(students[i].id==id){
            printf("Update Batch: "); fgets(students[i].batch,20,stdin); students[i].batch[strcspn(students[i].batch,"\n")]=0;
            printf("Update Membership: "); fgets(students[i].membership,10,stdin); students[i].membership[strcspn(students[i].membership,"\n")]=0;
            printf("Updated successfully.\n");
            return;
        }
    }
    printf("Student not found!\n");
}

// Delete student
void deleteStudent() {
    int id;
    printf("Enter student ID to delete: "); scanf("%d",&id); while(getchar()!='\n');
    for(int i=0;i<count;i++){
        if(students[i].id==id){
            for(int j=i;j<count-1;j++) students[j]=students[j+1];
            count--;
            printf("Deleted successfully.\n");
            return;
        }
    }
    printf("Student not found!\n");
}

// Batch-wise report
void batchReport() {
    char batch[20];
    printf("Enter batch to report (CS/SE/Cyber/AI): "); fgets(batch,20,stdin); batch[strcspn(batch,"\n")]=0;
    for(int i=0;i<count;i++){
        if(strcmp(students[i].batch,batch)==0){
            printf("%d | %s | %s | %s\n", students[i].id, students[i].name, students[i].membership, students[i].interest);
        }
    }
}

int main() {
    loadDatabase("members.dat");

    int choice;
    while(1){
        printf("\n1:Add 2:Update 3:Delete 4:Display All 5:Batch Report 6:Exit\nChoice: ");
        if(scanf("%d",&choice)!=1) break;
        while(getchar()!='\n');
        switch(choice){
            case 1: addStudent(); break;
            case 2: updateStudent(); break;
            case 3: deleteStudent(); break;
            case 4: displayAll(); break;
            case 5: batchReport(); break;
            case 6: saveDatabase("members.dat"); free(students); return 0;
            default: printf("Invalid choice!\n");
        }
    }

    saveDatabase("members.dat");
    free(students);
    return 0;
}
