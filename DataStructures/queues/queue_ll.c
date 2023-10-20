#include<stdio.h>
#include<stdlib.h>

struct sll{
    int data;
    struct sll *next;
};

typedef struct sll node;
node *front=NULL, *rear=NULL, *new;
void enqueu(){i
    new = (node *)malloc(sizeof(node));
    printf("Enter the data");
    scanf("%d", &new->data);
    new->next=NULL;

    if(front==NULL){
        front=rear = new;
    }else{
        rear->next=new;
        rear=new;
    }
    
}
void dequeu(){
    node *temp;
    if(front==rear){
        front=rear=NULL;
        free(front);
    }
    else{
        temp = front;
        front= front->next;
        printf("%d is poped", temp->data);
        free(temp);
    }
}

void display(){
    temp = front;
    while(temp!=NULL){
        printf("%d", temp->data);
        temp=temp->next;
    }
}


int main(){
    int ch;
    do{
        printf("1.Enqueue\n2.Dequeue\3.Display\4.Exit");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                enqueue();
                break;
            case 2:
                dequeu();
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