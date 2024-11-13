#include<stdio.h>
int main(){ 
    int row,col;
    printf("enter the no of rows and cols");
    scanf("%d",&row);
    scanf("%d"&col);
    printf("enter the elements");
    int a[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }     
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}