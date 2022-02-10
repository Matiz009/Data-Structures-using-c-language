#include<stdio.h>
void enqueue(int num);
void dequeue(int num);
void display();

int queue[100];
int front=-1;
int rear=-1;

int main(){
    int choice,num;
    while(1){
        printf("Press 1 to enqueue\n");
        printf("Press 2 to dequeue\n");
        printf("Press 3 to display\n");
        printf("Press 0 to exist\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                printf("Enter the number:\t");
                scanf("%d",&num);
                enqueue(num);
                continue;
            }
            case 2:{
                printf("Enter the number:\t");
                scanf("%d",&num);
                dequeue(num);
                continue;
            }
            case 3:{
                display();
                continue;
            }
            case 0:{
                break;
                return 0;
            }
        }
    }

    return 0;
}

void enqueue(int num){
   if(rear==99){
       printf("Queue is full\n");
       return;
   }else if(front==-1 && rear==-1){
       front=0;
       rear=0;
       queue[rear]=num;
       printf("%d is enqueued\n",num);
   }else{
       rear++;
       queue[rear]=num;
       printf("%d is enqueued\n",num);
   }
}

void dequeue(int num){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
        return;
    }else if(front==rear){
        front=-1;
        rear=-1;
        printf("%d is dequeued\n",num);
    }else{
        front++;
        printf("%d is dequeued\n",num);
    }
}

void display(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
        return;
    }else{
        int i;
        for(i=front;i<=rear;i++){
            printf("%d\n ",queue[i]);
        }
    }
}

