#include<stdio.h>
void input(int array[20],int size){
	int index;
	for(index=0;index<size;index++){
		printf("Enter the values-:");
		scanf("%d",&array[index]);
	}
}

void reverse(int array[20],int size){
	int index,temp;
	printf("\nThe reverse array-:\n");
	for(index=0;index<size/2;index++){
		temp=array[index];
		array[index]=array[size-1-index];
		array[size-1-index]=temp;
	//	printf("%d\t",array[index]);
	}
}

void display(int array[20],int size){
	int index;
	for(index=0;index<size;index++){
		printf("%d\t",array[index]);
	}
}

main(){
	int arr[20];
	int size=6;
	input(arr,size);
	reverse(arr,size);
	display(arr,size);
	printf("\n");
}
