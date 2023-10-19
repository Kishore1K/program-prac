//josephus problem using cll
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

typedef struct Node node;

int josephus(int k){
    node *head, *cur, *prev;
    cur = head;

    while(cur->next!=cur){
        if(i=0; i<k; i++){
            prev = cur;
            cur = cur->next;
        }
        prev -> next = cur->next;
        prinf("%d is Killed", cur->data);
        free(cur);
        cur = prev->next;
    }
    return (cur->data);
}

