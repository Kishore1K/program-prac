#include<stdio.h>

#define size  5

int stack[size], top=-1, data;

void push(){
    printf("Enter the Data");
    stack("%d", &data);
    if(top==size-1){
        printf("Overflow\n");
    }else{
        top+=1;
        stack[top]=data;
    }
}

void pop(){
    if(top==-1){
        printf("Under Flow");
    }else{
        printf("%d", stack[top]);
        top = top-1;
    }
}
void display(){
    for(int i=top; i>=0; i--){
        printf("%d", stack[i]);
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