//To draw a square
#include <stdio.h>
int main(){
int row,coloumn;
printf("Enter number of rows: ");
scanf("%d", &row);
printf("\nEnter number of columns: ");
scanf("%d", &coloumn);
for(int i=0;i<row;i++){
    for(int j=0;j<coloumn-1;j++){
        printf("* ");
    }
    printf("*\n");
}

    return 0;
}