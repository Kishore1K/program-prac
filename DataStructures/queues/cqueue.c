#include<stdio.h>
#define max 5
int cqueue[max], front=-1, rear =-1;
int data;
void enqueu(){
    printf("Enter the data");
    scanf("%d", &data);
    if(front==(rear+1)%max){
        printf("Over flow");
    }else{
        rear= (rear+1)%max;
    }
    cqueue[rear]=data;
}
void dequeue(){
    int x;
    if(front == -1){
        printf("Under Flow");
    }else if(front==rear){
        x = cqueue[front];
        front=rear=-1;

    }else{
        
        front=(front+1)%max;
    }
    printf("%d", x);
}
void display(){
    for(int i=front; i!=rear; i=(i+1)%max){
        printf("%d", cqueue[i]);
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