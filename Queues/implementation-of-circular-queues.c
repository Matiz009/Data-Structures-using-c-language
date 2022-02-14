#include<stdio.h>
int queue[10];
int front=-1,rear=-1;

void enqueue(int x);
void dequeue();
void display();


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


void enqueue(int x){
    if(front==-1 && rear==-1){
        front=0;
        rear=0;
        queue[rear]=x;
    }else if(rear+1%10==front){
         printf("Queue is full\n");
        }else{
            rear=(rear+1)%10;
            queue[rear]=x;
        }
}

void dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
    }else if(front==rear){
        front=-1;
        rear=-1;
    }else{
        front=(front+1)%10;
    }
}

void display(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
    }else{
        int i;
        for(i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}