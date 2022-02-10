#include<stdio.h>
int main(){
	int size; //variables decleration
	int counter;
	int index;
	int elements;
	
	printf("Enter the size of array:\t");//getting the size of array from the user
	scanf("%d",&size);
	
	int array[size];//initializing the array with the size
	
	for(counter=0;counter<size;counter++){
		printf("Enter the %d element:\t",counter+1);//getting the elements in array
		scanf("%d",&array[counter]);
	}
	
	for(counter=0;counter<size;counter++){
		printf("%d Element of array are:\t%d\n",counter+1,array[counter]);//printing the elements
	}
	
	
	printf("Enter the position at which you want to delete the element:\t");//getting the index at which to delete the element
	scanf("%d",&index);
	
	for(counter=index-1;counter<size-1;counter++){
		array[counter]=array[counter+1];
	}
    
	printf("Array after deletion of elements:\n");
	for(counter=0;counter<size-1;counter++){
		printf("%d",array[counter]);
	}

	
	
	return 0;
}
