#include <stdio.h>
#include<stdlib.h>


typedef struct {
    char name[50];
    char dept[10];
    char usn[10];
    int age;
    float cgpa;
}student;


void main(){

    student  *ptr;
    int n;
    printf("Enter the number of students\n");
    scanf("%d", &n);

    ptr = (student *)malloc(n*sizeof(student));

    if(ptr==NULL){
        printf("Error Memory not alloactede\n");

    }
    for(int i=0; i<n; i++){
        printf("Enter the name , dept, usn, age, cgpa of %d student\n", i);
        scanf("%s%s%s%d%f", (ptr+i)->name, (ptr+i)->dept, (ptr+i)->usn, &(ptr+i)->age, &(ptr+i)->cgpa);

    }

    print("The Students are : \n");
    for(int i=0; i<n; i++){
        printf("Name = %s, Dept = %s, USN = %s, Age= %d, CGPA= %f \n", (ptr+i)->name, (ptr+i)->dept, (ptr+i)->usn, (ptr+i)->age, (ptr+i)->cgpa  )
    }

}