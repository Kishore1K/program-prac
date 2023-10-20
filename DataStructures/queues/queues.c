#include<stdio.h>
#define size 5
int queue[size], f=-1,r=-1;

void enqueue(){
    int x;
    printf("Enter the element");
    scanf("%d", &x);
    if( r==(size-1)){
        printf("overflow");
    }
    else{
        if(front == -1)
            front=0;
        r+=1;
        queue[r]=x;
    }
}

void dequeu(){
    int x;
    if(f==-1){
        printf("underflow");
    }else if(f==r){
        x = queue[f];
        f=r=-1;

    }else{
        x =queue[f];
        f+=1;
    }
    printf("%d is poped", x);
}

void display(){
    for(i=f; i<=r; i++){
        printf('%d', queue[i]);
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