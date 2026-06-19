#include <stdio.h>

void diagnostic(int grid[][5]){
    int count = 0;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){

            int value = 0;
            value = grid[i][j];
         if ( ((1<<1) & value) !=0 || ((1<<2) & value) !=0 ){
                    count++;
                }
            }

        }
    
    printf("\nTotal Sectors that are overloaded and need maintainance are: %d", count);
    return;
}


void querystatus(int grid[][5]){
    int row, col; 
    row = 0;
    col = 0;

    int value = 0;

    printf("\nEnter the set of coordinates (row, col) you need query status:");
    scanf("%d %d", &row, &col);

    value = grid[row][col];
    if((1 & value) == 0){
        printf("\nPower Is Off");
    }
    else{
        printf("\nPower is On");
    }

    if(((1<<1) & value) ==0){
        printf("\nNormal");
    }
    else{
        printf("\nOverloaded");
    }
    if(((1<<2) & value)==0){
        printf("\nNo Maintainance required");
    }
    else{
        printf("\nMaintainance is required");
    }
    return;
}


void sectorstatus(int grid[][5]){
    int value = 0;
    int row, col; 
    row = 0;
    col = 0;

    printf("\nSpecify the coordinates you want to update:");
    scanf("\n%d", &row);
    scanf("\n%d", &col);

    printf("\nEnter the new value you want to update in cell: ");
    scanf("%d", &value);

    grid[row][col] = value;


    return;
}


int main(){
    int grid[5][5];

    printf("\n Print the grid to monitor the system:");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &grid[i][j]);
            if(grid[i][j] < 0 || grid[i][j] > 7){
                printf("\nInvalid data!");
                return 0;
            }
        }
    }

    printf("\nThe Grid system is: \n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("\t%d", grid[i][j]);
        }
        printf("\n");
    }
    int choice;
    while(1){
        printf("\nChoose the following options: \n1.Update Sector Status \n2. Query Sector Status \n3. Run system Diagnostic \n4.Exit system \n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            sectorstatus(grid);
            break;

            case 2:
            querystatus(grid);
            break;

            case 3:
            diagnostic(grid);
            break;

            case 4:
            printf("\nExiting system!");
            return 0;
        }
    }
    return 0;
}