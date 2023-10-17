/*Create array of character pointers using dynamic 
memory allocation read and display the name of 
five cities
*/
#include<stdio.h>
#include<stdlib.h>

void main(){
    char *name[5], str[10];
    int i;


    for(int i=0;i<5; i++){
        printf("Enter the %d city name : \n", i);
        scanf("%s", str);
        name[i] = (char *)malloc(strlen(str)+1);
        strcpy(name[i], str);

    }

    printf("The cities are \n");
    for(int i=0;i<5; i++ ){
        printf("%s \n", *(name+i));
        free(name[i]);
    }

}