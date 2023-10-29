#include<stdio.h>
void createArray(int a[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
}


void insertionSort(int a[], int n){
    int item, i, j;

    for(int i=1;i<n; i++){
        item = a[i];
        j=i-1;
        /*move eleme of arr[0...n-1] that are greater then item to one position left*/
        while(j>=0 && item <a[j] ){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=item;
    }

}