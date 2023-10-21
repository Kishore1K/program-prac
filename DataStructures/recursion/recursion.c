#include<stdio.h>

int fact(int n){
    if(n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
int fab(int n){
    if(n==0 || n==1){
        return n;
    }else{
        return fab(n-1)+fab(n-2);
    }
}
int gcdOfEcudian(int m, int n){
    if(n==0){
        return m;
    }else{
        return gcdOfEcudian(n, m%n);
    }
}
int ack(int m, int n){
    if(m==0){
        return n+1;
    }else if(m>0 && n==0){
        return ack(m-1, 1);
    }else if(m>0 && n>0){
        return ack(m-1, ack(m, n-1))
    }
}

int sumOfNum(int n){
    if(n<=1){
        return 1;
    }else{
        return n+sumOfNum(n-1);
    }
}

int sumOfDigit(int n){
    int sum=0;
    if(n>0){
        sum = sum + (n%10);
        sumOfDigit(n/10);
    }else{
        return n;
    }
}
int toh(int n, char from, char aux, char to){
    if(n==1){
        printf("Move 1 disk from %c to %c ", from, to);
        return;
    }
    toh(n-1,from, to ,aux);
    printf("Move %d from %c to %c", n, from, to);
    toh(n-1, aux, from, to);
}