//Transpose of a sparse matrix
#include<stdio.h>

void readmatrix(int rowmajor[30][3]){
    int row, col, i, nzero;
    printf("Rows-:");
    scanf("%d", &rowmajor[0][0]);
    printf("Column:");
    scanf("%d", &col);
    printf("Non-zero nos:");
    scanf("%d", &nzero);
    rowmajor[0][1] = col;
    rowmajor[0][2] = nzero;
    for(i = 1; i <= nzero; i++){
        scanf("%d%d%d", &rowmajor[i][0], &rowmajor[i][1], &rowmajor[i][2]);
    }
}

void transpose(int trans[30][3], int rowmajor[30][3]){
    int temp = 1, i, j;
    trans[0][0] = rowmajor[0][1];
    trans[0][1] = rowmajor[0][0];
    trans[0][2] = rowmajor[0][2];
    for(i = 0; i < rowmajor[0][1]; i++){
        for(j = 1; j <= rowmajor[0][2]; j++){
            if(i == rowmajor[j][1]){
                trans[temp][0] = i;
                trans[temp][1] = rowmajor[j][0];
                trans[temp][2] = rowmajor[j][2];
                temp++;
            }
        }
    }
} 

void display(int trans[30][3]){
    int i;
    for(i = 0; i <= trans[0][2]; i++){
        printf("%d\t%d\t%d\n", trans[i][0], trans[i][1], trans[i][2]);
    }
}

main(){
    int rowmaj[30][3], colmaj[30][3];
    readmatrix(rowmaj);
    transpose(colmaj, rowmaj);
    printf("\nAfter Transpose\n");
    display(colmaj);
}
