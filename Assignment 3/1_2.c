#include<stdio.h>
void input(int array[20],int size){
	int index;
	for(index=0;index<size;index++){
		printf("Enter the values-:");
		scanf("%d",&array[index]);
	}
}
void update(int array[20],int size){
	int index;
	for(index=0;index<size;index++){
		printf("%d\t",array[index]*10);
	}
}

main(){
	int arr[20];
	int size=5;
	input(arr,size);
	update(arr,size);
	printf("\n");
}
