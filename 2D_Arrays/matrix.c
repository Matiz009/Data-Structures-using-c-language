#include<stdio.h>
int main(){
    int matrix[3][3];
    int row,column;
    printf("Enter the elements of the matrix:\n");
    for(row=0;row<3;row++){//row
        for(column=0;column<3;column++){
            scanf("%d",&matrix[row][column]);
        }
    }
    printf("The matrix is:\n");
    for(row=0;row<3;row++){//row
        for(column=0;column<3;column++){
            printf("%d ",matrix[row][column]);
        }
        printf("\n");
    }

    return 0;
}