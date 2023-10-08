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
void search(int array[20],int size,int num){
	int index,cnt=0;
	for(index=0;index<size;index++){
		if(array[index==num]){
			cnt++;
			break;
		}
	}
	if(cnt!=0){
		printf("The element is found!");
	}
	else{
		printf("The element is not found");
	}

}

main(){
	int arr[]={21,22,23,24,25};
	int size=5;
	int num=23;
	input(arr,size);
	search(arr,size,num);
	//display(arr,size);
	printf("\n");
}
