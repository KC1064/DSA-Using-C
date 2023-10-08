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
	for(index=0;index<size;index++){
		printf("%d\t",array[index]);
	}
}

main(){
	int arr[20];
	int size=5;
	input(arr,size);
	display(arr,size);
	printf("\n");
}
