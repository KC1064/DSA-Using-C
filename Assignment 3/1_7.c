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

void delete(int array[20],int size){
	int index,num,pos;
	printf("Enter the number you want to delete-:");
	scanf("%d",&num);
	for(index=0;index<size;index++){
		if(array[index]==num){
			pos=index;
			break;
		}
	}
	for(index=pos;index<size-1;index++){
		array[index]=array[index+1];
	}
	for(index=0;index<size-1;index++){
		printf("%d\t",array[index]);
	}
}

main(){
	int arr[20];
	int size=6;
	input(arr,size);
	delete(arr,size);
//	display(arr,size);
	printf("\n");
}
