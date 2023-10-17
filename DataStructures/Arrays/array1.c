#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int num; 
    int max;

    printf("Enter the number of Elements\n");
    scanf("%d ", &num);

    ptr = (int *)calloc(num, sizeof(int));
    if(ptr==NULL){
        printf("Error Memory Not allocated\n");
        return 0;
    }
    for(int i=0; i<num; i++){
        printf("Enter the %d Elem : \n",i );
        scanf("%d", ptr+i);
    }

    max = *ptr;
    for(int i=1; i<num; i++){
        if(max < *(ptr+i)){
            max = *(ptr+i);
        }
    }
    printf("The Max Element is %d \n", max);
    free(ptr);
}