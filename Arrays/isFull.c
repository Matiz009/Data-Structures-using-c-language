#include<stdio.h>
#include<stdbool.h>
int main(){
   int array[4]={1,2,3,4};
   int counter;
   bool flag=false;
   for ( counter = 0; counter < 4; counter++)
   {
      if(array[counter]!='\0'){
         flag=true;
    }else{
         flag=false;
    }
   }
    if(flag==true){
        printf("The array is full");
    }else{
        printf("The array is not full");
    }
   
    return 0;
}