#include<stdio.h>
#include<stdlib.h>

struct sll{
    int data;
    struct sll *next;
};

typedef struct sll node;

node *top=NULL, *new;

void push(){
    new = (node *)malloc(sizeof(node));
    printf("Enter the data\n");
    scanf("%d", &new->data);
    if(top==NULL){
        new->next=NULL;
        top = new;
    }else{
        new->next=top;
        top=new;
    }
}
void pop(){
    node *temp;
    if(top==NULL){
        printf("Under flow");

    }
    else{
        temp = top;
        top = top->next;
        printf("%d is poped",temp->data);
        free(temp);
    }

}
void display(){
    temp = top;

    while(temp!=NULL){
        printf("%d", temp->data);
        temp= temp->next;
    }
}
int main(){
    int ch;
    do{
        printf("1.POP\n2.POP\3.Display\4.Exit");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exit\n");
                break;
            default:
                printf("Enter the correct option\n");
        }
    }while(ch!=4);
}