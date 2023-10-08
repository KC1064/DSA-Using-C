#include<stdio.h>
void input(int a[20],int b[20],int s1,int s2){
	int i,j;
	printf("Input for first array-:\n");
	for(i=0;i<s1;i++){
		printf("Enter the values-:");
		scanf("%d",&a[i]);
	}
	printf("Input for second array-:\n");
	for(j=0;j<s2;j++){
		printf("Enter elements-:");
		scanf("%d",&b[j]);
	}
}

void merge(int a[20], int b[20],int s1,int s2){
	int c[40],k,i=0,j=0;
	for(k=0;k<s1;k++){
		c[k]=a[i];
		i++;
	}
	for(k=i;k<s1+s2;k++){
		c[k]=b[j];
		j++;
	}
	for(k=0;k<s1+s2;k++){
		printf("%d\t",c[k]);
	}
}

main(){
	int arr[20];
	int arr2[20];
	int size=3;
	int size2=4;
	input(arr,arr2,size,size2);
	merge(arr,arr2,size,size2);
//	display(arr,size);
	printf("\n");
}
