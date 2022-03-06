#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;//data part of node
	struct node * nextAddress;//address part of node
};

void linkedListTraversal(struct node *pointer);

int main(){
	struct node * head;
	struct node * second;
	struct node * third;
	struct node * fourth;
	head= (struct node *) malloc(sizeof(struct node));
	second= (struct node *) malloc(sizeof(struct node));
	third= (struct node *) malloc(sizeof(struct node));
	fourth= (struct node *) malloc(sizeof(struct node));
	
	head->data=12;
	head->nextAddress=second;
	
	second->data=23;
	second->nextAddress=third;
	
	third->data=246;
	third->nextAddress=fourth;
	
	fourth->data=101;
	fourth->nextAddress=NULL;
	
	linkedListTraversal(head);
	return 0;
}

void linkedListTraversal(struct node *pointer){
	while(pointer!=NULL){
		printf("Element is:\t%d\n",pointer->data);
		pointer=pointer->nextAddress;
	}
}
