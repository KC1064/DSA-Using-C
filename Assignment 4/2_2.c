//Convert a triplet matrix into sparse
#include<stdio.h>
void createtriplet(int triplet[30][3]){
	int nzero,i,j;
	printf("Non zero-:");
	scanf("%d",&nzero);
	for(i=0;i<nzero+1;i++){
		for(j=0;j<3;j++){
			scanf("%d",&triplet[i][j]);
		}
	}
}

void createsparse(int sparse[50][50], int triplet[30][3]){
	int i,j,colindex,rowindex,temp=1;

	for(i=0;i<triplet[0][0];i++){
		for(j=0;j<triplet[0][1];j++){

			sparse[i][j]=0;
		}
}
	for(i=1;i<=triplet[0][2];i++){
		for(j=0;j<3;j++){
			rowindex=triplet[temp][0];
			colindex=triplet[temp][1];
			sparse[rowindex][colindex]=triplet[temp][2];
			temp++;
		}
}
}

void display(int sparse[50][50],int triplet[30][3]){
	int i,j;
	for(i=0;i<triplet[0][0];i++){
		for(j=0;j<triplet[0][1];j++){
			printf("%d ",sparse[i][j]);
		}
		printf("\n");
	}
	
}

main(){
	int rowmajor[30][3],sparse[50][50];
	createtriplet(rowmajor);
	createsparse(sparse,rowmajor);
	display(sparse,rowmajor);
}