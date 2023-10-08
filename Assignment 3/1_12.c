#include<stdio.h>
void input(int a[30],int b[30],int m,int n){
    int i,j;
    printf("Enter the first array-:\n");
	for(i=0;i<m;i++){
        printf("Enter the values-:");
        scanf("%d",&a[i]);
    }
	printf("Enter the second array-:\n");
	for(j=0;j<n;j++){
		printf("Enter the values-:");
		scanf("%d",&b[j]);
	}
}

void mergeArrays(int a[30], int m, int b[30], int n, int mergedArr[60]){
    int i = 0, j = 0, k = 0;
    while (i<m && j<n) {
        if (a[i]<=b[j]) {
            mergedArr[k] = a[i];
            i++;
        }
        else{
            mergedArr[k] = b[j];
            j++;
        }
        k++;
    }
    
    while (i<m) {
        mergedArr[k]=a[i];
        i++;
        k++;
    }
    
    while (j<n){
        mergedArr[k]=b[j];
        j++;
        k++;
    }
}

main() {
    int arr1[100], arr2[100], mergedArr[200];
    int size1=4, size2=3, mergedSize;
    printf("Enter the arrays in sorted order!!\n");
    input(arr1,arr2,size1,size2);
    mergeArrays(arr1, size1, arr2, size2, mergedArr);
    mergedSize = size1 + size2;
    printf("Merged array (in sorted order): ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d\t", mergedArr[i]);
    }
    printf("\n");
}
