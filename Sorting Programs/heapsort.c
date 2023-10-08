//Implementation of heapsort
#include<stdio.h>
void heapsort(int arr[],int size);
void max_heapify(int arr[],int index,int size);
void swap(int *a,int *b);
void heapsort(int arr[],int size){
	int index,newsize;
	int i=0;
	for(index=size/2-1;index>=0;index--){
		max_heapify(arr,index,size);
	}
	for(newsize=size-1;newsize>=0;newsize--){
		swap(&arr[0],&arr[size-1-i]);
		max_heapify(arr,0,newsize);
		i++;
	}
}

void max_heapify(int arr[],int index,int size){
	int largest,left,right;
	largest=index;
	left=2*index+1;
	right=2*index+2;
	if(left<size && arr[left]>arr[largest]){
		largest=left;
	}
	if(right<size && arr[right]>arr[largest]){
		largest=right;
	}
	if(largest!=index){
		swap(&arr[index],&arr[largest]);
		max_heapify(arr,largest,size);
	}			
}

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

main(){
	int len,i;
	int arr[50];
	printf("Enter the size of array-:");
	scanf("%d",&len);
	printf("Enter the array-: \n");
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	printf("\n----ORIGINAL ARRAY-----\n");
	for(i=0;i<len;i++){
		printf("%d\t",arr[i]);
        }
	heapsort(arr,len);
	printf("\n----SORTED ARRAY----\n");
	for(i=0;i<len;i++){
		printf("%d\t",arr[i]);
	}
}
