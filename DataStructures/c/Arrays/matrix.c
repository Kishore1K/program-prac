#include<stdio.h>


void arrayCreation(int a[][], int row, int col){
    for(int i=0; i<row; i++){
        printf("Enter the Elemnets of %d \n", i);
        for(int j=0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
    }
}

void displayMatrix(int a[][], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}

void  addMatrix(int a[][],int b[][],int c[][],int row,int col,int row1,int  col1){
    if(row==row1 && col==col1){
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                c[i][j]=a[i][j]+b[i][j];
                printf("%d", c[i][j]);
            }
            printf("\n");
        }
    }

}

void  subMatrix(int a[][],int b[][],int c[][],int row,int col,int row1,int  col1){
    if(row==row1 && col==col1){
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                c[i][j]=a[i][j]-b[i][j];
                printf("%d", c[i][j]);
            }
            printf("\n");
        }
    }

}

void  addMatrix(int a[][],int b[][],int c[][],int row,int col,int row1,int  col1){
    if(row==col1){
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                c[i][j]=0;
                for(int k=0; k<col; k++){
                    c[i][j]+= a[i][k]*b[k][j];
                    
                }
                printf("%d", c[i][j]);
                
            }
            printf("\n");
        }
    }

}


void main(){
    int a[10][10], b[10][10], c[10][10], num , row, col, row1, col1;

    printf("Enter the number of rows and col of 1 array \n");
    scanf("%d %d",&row ,&col );

    arrayCreation(a, row, col);

    printf("Enter the number of rows and col of 2 array \n");
    scanf("%d %d",&row1,&col1 );  
    arrayCreation(b, row1, col1);

    // Matrix display
    printf("Matrix A")
    displayMatrix(a, row, col);
    printf("Matrix B")
    displayMatrix(b, row1, col1);


    //Matrix addition
    addMatrix(a,b, c, row, col, row1, col1);

    //Matrix sub
    subMatrix(a,b, c, row, col, row1, col1);

    //multiply
    mulMatrix(a,b, c, row, col, row1, col1);
    displayMatrix(c, row, col);


}