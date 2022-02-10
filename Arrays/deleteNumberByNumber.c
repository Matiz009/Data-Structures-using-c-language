#include<stdio.h>
int main(){
    int array[4]={12,34,56,78};
    int counter;
    int position;
    int number;
    printf("Enter the number which you want to delete: ");
    scanf("%d",&number);
    for ( counter = 0; counter < 4; counter++)
    {
       if(array[counter]==number){
           position=counter;
       }
    }

    //Most important part
    for ( counter = position-1; counter < 3; counter++)
    {
       array[counter]=array[counter+1];
    }


    printf("The array after deletion is: ");
    for ( counter = 0; counter < 3; counter++)
    {
        printf("%d\n",array[counter]);
    }
    

}