#include<stdio.h>
int main(){
    int length=100;
    int array[length];
    int i;
    for(i=0;i<length;i++){
     printf("Enter the number: ");
        scanf("%d",&array[i]);
        if(array[i]==0){
            break;
        }
    }
    int counter;
    for(counter=0;counter<i;counter++){
        if(array[counter]!=0){
           counter++;
        }else if(array[counter]==0){
            break;
        }
    }
    printf("The length of the array is: %d",counter);
    return 0;
}