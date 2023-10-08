#include<stdio.h>
void input(int array[20],int size){
	int index;
	for(index=0;index<size;index++){
		printf("Enter the values-:");
		scanf("%d",&array[index]);
	}
}
void display(int array[20],int size){
	int index;
	for(index=0;index<size+1;index++){
		printf("%d\t",array[index]);
	}
}

void insert(int array[20],int size){
	int index,j,num;
	printf("Enter the index where you want to insert-:");
	scanf("%d",&j);
	printf("Enter the number to insert-:");
	scanf("%d",&num);
	for(index=size;index>=j;index--){
		array[index+1]=array[index];
	}
	array[j]=num;
	for(index=0;index<size+1;index++){
		printf("%d\t",array[index]);
	}
}

main(){
	int arr[20];
	int size=4;
	input(arr,size);
	insert(arr,size);
//	display(arr,size);
	printf("\n");
}
