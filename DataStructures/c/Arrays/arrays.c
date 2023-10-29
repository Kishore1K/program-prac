/*Array Operations */
#include<stdio.h>

void CreateArray(int a[], int n){
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
}
void main(){
    int num, i, a[10];

    printf("Enter the number of Elements \n");
    scanf("%d", &num);

    // creating the array
    CreateArray(a, num);

    //forward Display
    forwardDisplay(a, num);

    //backward 
    backwardDisplay(a, num);

    //insert
    num = insetElement(5, 4, num);

    //delete
    num = deleteElem(2, num);



}
//Display forward
void forwardDisplay(int a[], int n){
    for(int i=0; i<n;i++){
        printf("%d", a[i]);
    }
}
//display descending order
void backwardDisplay(int a[], int n){
    for(int i=n-1; i>=0; i--){
        printf("%d", a[i]);
    }
}

//insert at position

int insetElement(int elem, int pos, int n){
    if(pos <0 || pos > n){
        printf("Element Cant be inserted \n");
        return 0;
    }
    for(int i=n-1; i>=pos; i--){
        a[i+1]=a[i];
    }
    a[pos]=elem;
    return n+1;
}

int deleteElem(int pos, int n){
    if(pos <0 || pos > n){
        printf("Element Cant be deleted \n");
        return 0;
    }
    for(int i =pos+1;i<n; i++){
        a[i-1]=a[i];
    }
    return n-1;
}

