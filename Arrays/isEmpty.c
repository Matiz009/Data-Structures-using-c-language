#include<stdio.h>
#include<stdbool.h>
int main(){
    int array[4]={};
    int i;
    bool flag=false;
    for(i=0;i<4;i++){
       if(array[i]=='\0'){
           flag=true;
       }else{
              flag=false;
       }
    }
     if(flag==true){
         printf("The array is empty");
     }else{
         printf("The array is not empty");
     }
    return 0;
}