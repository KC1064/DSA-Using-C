//Sparse matrix into triplet form
#include<stdio.h>
void readmatrix(int sparse[50][50],int row,int col){
	int rowindex,colindex;
	for(rowindex=0;rowindex<row;rowindex++){
		for(colindex=0;colindex<col;colindex++){
			//printf("Enter the values-:");
			scanf("%d",&sparse[rowindex][colindex]);
		}
	}
}

void createsparse(int sparse[50][50],int row,int col,int triplet[50][3]){
	int nzero=0,rowindex,colindex;
	for(rowindex=0;rowindex<row;rowindex++){
		for(colindex=0;colindex<col;colindex++){
			if(sparse[rowindex][colindex]!=0){
				nzero++;
			}
		}
	}
	int temp=1;
	triplet[0][0]=row;
	triplet[0][1]=col;
	triplet[0][2]=nzero;
	for(rowindex=0;rowindex<row;rowindex++){
		for(colindex=0;colindex<col;colindex++){
			if(sparse[rowindex][colindex]!=0){
				triplet[temp][0]=rowindex;
				triplet[temp][1]=colindex;
				triplet[temp][2]=sparse[rowindex][colindex];
				temp++;
			}
		}
	}

}

void displaysparse(int triplet[50][3]){
	int rowindex,colindex;
	for(rowindex=0;rowindex<=triplet[0][2];rowindex++){
		for(colindex=0;colindex<3;colindex++){
			printf("%d\t",triplet[rowindex][colindex]);
		}
		printf("\n");
	}
}

main(){
	int sparsematrix[50][50],rmajor[30][3];
	int row,col;
	printf("Enter the numbers of rows and columns-:");
	scanf("%d%d",&row,&col);
	readmatrix(sparsematrix,row,col);
	createsparse(sparsematrix,row,col,rmajor);
	displaysparse(rmajor);
}
