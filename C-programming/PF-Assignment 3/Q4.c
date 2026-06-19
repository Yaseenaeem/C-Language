#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    int popularity;
    int lastAccess;   
};

// Search for a book by ID
int findBook(struct Book shelf[], int count, int id) {
    for (int i = 0; i < count; i++) {
        if (shelf[i].id == id)
            return i;
    }
    return -1;
}

// Find the book with the smallest lastAccess value
int findLeastRecentlyUsed(struct Book shelf[], int count) {
    int index = 0;
    for (int i = 1; i < count; i++) {
        if (shelf[i].lastAccess < shelf[index].lastAccess)
            index = i;
    }
    return index;
}

int main() {
    int capacity, Q;
    scanf("%d %d", &capacity, &Q);

    struct Book shelf[100];  
    int count = 0;
    int timer = 1; 

    while (Q--) {
        char command[10];
        scanf("%s", command);

        // ADD 
        if (strcmp(command, "ADD") == 0) {
            int id, pop;
            scanf("%d %d", &id, &pop);

            int index = findBook(shelf, count, id);

            if (index != -1) {
                // Book exists -> update popularity and access time
                shelf[index].popularity = pop;
                shelf[index].lastAccess = timer++;
            }
            else {
                if (count < capacity) {
                    // Insert directly
                    shelf[count].id = id;
                    shelf[count].popularity = pop;
                    shelf[count].lastAccess = timer++;
                    count++;
                }
                else {
                    int lruIndex = findLeastRecentlyUsed(shelf, count);

                    shelf[lruIndex].id = id;
                    shelf[lruIndex].popularity = pop;
                    shelf[lruIndex].lastAccess = timer++;
                }
            }
        }

        // Access
        else if (strcmp(command, "ACCESS") == 0) {
            int id;
            scanf("%d", &id);

            int index = findBook(shelf, count, id);

            if (index == -1) {
                printf("-1\n");
            } else {
                printf("%d\n", shelf[index].popularity);
                shelf[index].lastAccess = timer++;  
            }
        }
    }

    return 0;
}
