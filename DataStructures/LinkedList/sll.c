#include<stdio.h>
#include<stdlib.h>

struct sll{
    int data;
    struct sll *next;    
};

typedef struct sll node;

node *head=NULL, *new, *temp, *prev;
int key;

void create(){
    if(head ==NULL){
        new = (node*)malloc(sizeof(node));
        printf("Enter the Element\n");
        scanf("%d", &new->data);
        new->next=NULL;
        head=new;
    }else{
        printf("LL already created");
    }
}
void insert_beg(){
    if(head==NULL){
        create();
    }else{
        new = (node *)malloc(sizeof(node));
        printf("Enter the Data");
        scanf("%d", &new->data);
        new->next = head;
        head = new;
    }
}

void insert_end(){
    if(head==NULL){
        create();
    }else{
        new = (node* )malloc(sizeof(node));
        printf("Enter the data \n");
        scanf("%d", &new->data);
        new->next=NULL;
        temp = head;

        while(temp->next !=NULL){
            temp = temp->next;
        }
        temp->next = new;
    }
}
void insert_pos(){
    if(head==NULL){
        create();
    }else{
        printf("Enter the pos\n");
        scanf("%d", &key);
        new = (node*)malloc(sizeof(node));
        printf("Enter the Data\n");
        scanf("%d", &new->data);

        temp = head;

        while(temp->data!=pos){
            temp = temp->next;
        }
        new->next=temp->next;
        temp->next=new;

    }

    
}

void delete_beg(){
    if(head==NULL){
        printf("No nodes  to delete\n");
    }else{
        temp = head;
        head = head->next;
        free(temp);
    }
}
void delete_end(){
    if(head==NULL){
        printf("No nodes  to delete\n");
    }else{
        temp = head;
        while(temp->next!=NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next=NULL;
        free(temp);
    }
}

void delete_pos(){
    if(head==NULL){
        printf("No nodes  to delete\n");
    }else{
        printf("Enter the Key\n");
        scanf("%d", &key);
        temp = head;
        while(temp->data!=Key){
            prev = temp;
            temp = temp->next;
        }
        prev->next=temp-next;
        free(temp);
    }
}

void display(){
    if(head==NULL){
        printf("No Nodes to display\n");
    }else{
        temp = head;

        while(temp != NULL){
            printf("%d", temp->data);
            temp = temp->next;
        }
    }
}
void search(){
    if(head==NULL){
        printf("No Nodes to display\n");
    }else{
        printf("Entr the Key\n");
        scanf("%d", &key);
        temp = head;

        while(temp!=NULL){
            if(temp->data == key){
                printf("Element present");
                break;
            }
            temp = temp->next;
        }
        printf("Element Not Found");
    }
}
int main(){

    int ch;
    do{
        printf("----------SLL-----------\n");
        printf("Enter the option\n");
        printf("0.Create LL\n1. Insert Begining\n2.Insert at Middel\n3.Insert at delete\n4.Delete at Begining\n5.Delete at Middel\n6.Delete at end\n7.Search\n8Display\n9.Exit");
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
                search();
                break;
            case 8:
                display();
                break;
            case 9:
                printf("\nExit\n");
                break;
            default:
                printf("Enter the Correct operation\n");

        }


    }while(ch !=9);

}

