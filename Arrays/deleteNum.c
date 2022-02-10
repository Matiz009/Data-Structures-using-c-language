#include<stdio.h>
int main(){
    int array[4]={12,34,56,78};
    int counter;
    int number;
    printf("Enter the index at which you want to delete the element: ");
    scanf("%d",&number);
    for ( counter = number-1; counter < 3; counter++)
    {
       array[counter]=array[counter+1];
    }
    printf("The array after deletion is: ");
    for ( counter = 0; counter < 3; counter++)
    {
        printf("%d\n",array[counter]);
    }
    

}