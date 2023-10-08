#include<stdio.h>
void input(int array[20],int size){
	int index;
	for(index=0;index<size;index++){
		printf("Enter the total marks-:");
		scanf("%d",&array[index]);
	}
}
void display(int array[20],int size){
	int index;
	for(index=0;index<size;index++){
		printf("%d\t",array[index]);
	}
}

void max_min(int array[20],int size){
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
	printf("The maximum marks-: %d\n",array[size-1]);
	printf("The minimum marks-: %d\n",array[0]);
}
void sum_avg(int array[20],int size){
	int sum=0,index;
	for(index=0;index<size;index++){
		sum=sum+array[index];
	}
	printf("The sum of the all the marks-: %d\n",sum);
	printf("The average of the class-: %d\n",sum/size);
}


main(){
	int arr[20];
	int size=5;
	input(arr,size);
	max_min(arr,size);
	sum_avg(arr,size);
	display(arr,size);
	printf("\n");
}
