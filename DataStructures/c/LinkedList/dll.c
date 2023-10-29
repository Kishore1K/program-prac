#include<stdio.h>
#include<stdlib.h>

struct dll {
    int data;
    struct dll *next;
    struct dll *prev;
};

typedef struct dll node;

node *head =NULL, *new, *temp, *prev;
int key;

void create(){
    if(head==NULL){
        new = (node *)malloc(sizeof(node));
        printf("Enter the Data\n");
        scanf("%d", &new->data);
        new->next=new->prev = NULL;
        head=new;
    }else{
        printf("DLL is already created\n");
    }
}

void insert_beg(){
    if(head==NULL){
        create();
    }
    new = (node *)malloc(sizeof(node));
    printf("Enter the Data\n");
    scanf("%d", &new->data);
    new->prev=NULL;
    temp = head;
    new->next=temp;
    temp->prev=new;
    head=new;
}

void insert_end(){
    if(head==NULL){
        create();
    }
    new = (node *)malloc(sizeof(node));
    printf("Enter the Data\n");
    scanf("%d", &new->data);
    new->next=NULL;
    temp=head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=new;
    new->prev = temp;

}

void insert_pos(){
    if(head==NULL){
        create();
    }
    printf("Enter the Key");
    scanf("%d", &key);
    new = (node *)malloc(sizeof(node));
    printf("Enter the Data\n");
    scanf("%d", &new->data);
    temp = head;
    while(temp->data!=key){
        temp= temp->next;
    }
    new->prev=temp;
    new->next=temp->next;
    temp->next=new;
    new->next->prev=new;
}

void delete_beg(){
    temp=head;
    head= temp->next;
    temp->next->prev=NULL;
    free(temp);
}

void delete_end(){
    temp=head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev-next=NULL;
    free(temp);
}

void delete_pos(){
    printf("Enter the Key\n");
    scanf("%d", &key);
    temp=head;

    while(temp->data !=key){
        prev = temp;
        temp = temp->next;
    }
    prev->next=temp->next;
    temp->next->prev=prev;
    free(temp);
}

void displayLR(){
    temp=head;
    while(temp!=NULL){
        printf("%d", temp->data);
        temp=temp->next;
    }

}

void displayRL(){
    temp=head;
    while(temp!=NULL){
        temp = temp-next;
    }
    while(temp->prev!=NULL){
        printf("%d", temp->data);
        temp = temp->prev;
    }
    printf("%d", temp->data);
}


int main(){

    int ch;
    do{
        printf("----------DLL-----------\n");
        printf("Enter the option\n");
        printf("0.Create LL\n1. Insert Begining\n2.Insert at Middel\n3.Insert at delete\n4.Delete at Begining\n5.Delete at Middel\n6.Delete at end\n7.Display L-R\n8Display R-L\n9.Exit");
        scanf("%d", &ch);
        switch(ch){
            case 0:
                create();
                break;
            case 1:
                insert_beg();
                break;
            case 2:
                insert_pos();
                break;
            case 3:
                insert_end();
                break;
            case 4:
                delete_beg();
                break;
            case 5:
                delete_pos();
                break();
            case 6:
                delete_end();
                break();
            case 7:
                displayLR();
                break;
            case 8:
                displayRL();
                break;
            case 9:
                printf("\nExit\n");
                break;
            default:
                printf("Enter the Correct operation\n");

        }

    }while(ch !=9);

}

