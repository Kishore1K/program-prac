/*Circular Singlly Liked List*/

#include<stdio.h>
#include<stdlib.h>


struct cll{
    int data;
    struct cll *next;
};

typedef struct cll node;

node *head=NULL, *temp, *new, *prev, *ptr;
int key;
void create(){
    if(head==NULL){
        new = (node* )malloc(sizeof(node));
        printf("Enter the Data\n");
        scanf("%d", &new->data);
        new->next = new;
        head = new;

    }else{
        printf("CLL already Created\n");
    }
}

void  insert_beg(){
    if(head==NULL){
        create();
    }else{
        new = (node *)malloc(sizeof(node));
        temp = head;
        printf("Enter the data\n");
        scanf("%d", &new->data);
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = new;
        new-next= head;
        head = new;
    }

}

void insert_end(){
    if(head== NULL){
        create();
    }else{
        new = (node *)malloc(sizeof(node));
        printf("Enter the data\n");
        scanf("%d", &new-> data);
        temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp ->next = new;
        new->next= head;

    }
}
void insert_pos(){
    if(head==NULL){
        create();
    }else{
        printf('Enter the Key\n');
        scanf("%d", &key);
        new = (node *)malloc(sizeof(node));
        printf("Enter the data\n");
        scanf("%d", &new->data);

        temp = head;

        while(temp->data!=key){
            temp = temp->next;
        }

        new->next=temp->next;
        temp->next = new;

    }
}

void delete_beg(){
    temp = head;
    while(temp->next != head){
        temp= temp->next;
    }
    ptr=head;
    temp->next = head->next;
    head = head->next;
    free(ptr);
}

void delete_end(){
    temp= head;
    while(temp->next != head){
        prev = temp;
        temp = temp->next;
    }
    prev->next= temp->hext;
    free(temp);
}

void delete_pos(){
    printf("Enter the Key");
    scanf("%d", &key);
    temp = head;

    while(temp-> data != key){
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    free(temp);
}

void display(){
    temp= head;
    while(temp->next!=head){
        print("%d", temp->data);
        temp= temp->next;
    }
    printf("%d", temp->data);

}
int main(){
    int ch;

    do{
        printf("----------CLL-----------");
        printf("1.Create,\n2.Insert at Begining\n,3Insert at End\n,4Inset at Middel\n,5Delete at Begining\n,6Delete at end,\n7Delete at pos,\n8 Display,\n9Exit\n");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                create();
                break;
            case 2:
                insert_beg();
                break;
            case 3:
                insert_end();
                break;
            case 4:
                insert_pos();
                break;
            case 5:
                delete_beg();
                break;
            case 6:
                delete_end();
                break;
            case 7:
                delete_pos();
                break;
            case 8:
                display();
                break;
            case 9:
                printf("Exit\n");
                break;
            default:
                printf("Enter the Correct option\n");
            

        }while(ch!=9);
    }
}