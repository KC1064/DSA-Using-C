#include<stdio.h>
void input(int arr1[20],int arr2[20],int size){
	int index;
	for(index=0;index<size;index++){
		printf("Enter the values-:");
		scanf("%d",&arr1[index]);
	}
}
void copy(int arr1[20],int arr2[20],int size){
	int index;
	for(index=0;index<size;index++){
		arr2[index]=arr1[index];
	}
}
void display(int arr1[20],int arr2[20],int size){
	int index;
	for(index=0;index<size;index++){
		printf("%d\t",arr2[index]);
	}
}

main(){
	int arr1[20];
	int arr2[20];
	int size=5;
	input(arr1,arr2,size);
	copy(arr1,arr2,size);
	display(arr1,arr2,size);
	printf("\n");
}
