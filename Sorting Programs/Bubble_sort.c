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

void sort(int array[20],int size){
	int index,j,temp;
	for(index=0;index<size-1;index++){
		for(j=0;j<size-1;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}


main(){
	int arr[20];
	int size=5;
	input(arr,size);
	sort(arr,size);
	display(arr,size);
	printf("\n");
}
