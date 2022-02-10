#include<stdio.h>
#include<stdbool.h>

void push();
void pop();
void getStackElements();
bool isEmpty();
bool isFull();

int top =0;
int stack[100];

int main(){
    int number;
    int dec;

    while(1){
    printf("Press 1 to add number in stack\n");
    printf("Press 2 to remove number from stack\n");
    printf("Press 3 to display stack\n");
    printf("Press 4 to exit\n");
    scanf("%d",&dec);
    switch(dec){
        case 1:{
            printf("Enter number to add in stack\t");
            scanf("%d",&number);
            push(number);
            continue;
        }
        case 2:{
            pop();
            continue;
        }
        case 3:{
            getStackElements();
            continue;
        }
        case 4:{
            printf("Exiting\n");
            break;
            return 0;
        }
    }

    }
    return 0;
}
void push(int num){
 if(!isFull()){
    stack[top] = num;
    top++;
    printf("%d pushed into stack\n",num);
 }
}
void pop(){
 if(!isEmpty()){
    top--;
    printf("%d popped from stack\n",stack[top]);
 }
}

bool isFull(){
    if(top==100){
        printf("Stack is full\n");
        return true;
    }
    else{
        return false;
    }
}
bool isEmpty(){
    if(top==-1){
        printf("Stack is empty\n");
        return true;
    }
    else{
        return false;
    }
}

void getStackElements(){
    printf("Stack elements are\n");
    int i;
    for(i=0;i<top;i++){
        printf("%d\n",stack[i]);
    }
}