#include<stdio.h>
#include<stdlib.h>


struct BST{
    struct BST *left;
    int data;
    struct BST *right;
};
typedef struct BST node;
node *root=NULL, new;

node* insert(node *root, int item){
    if(root==NULL){
        new = (node *)malloc(sizeof(node));
        new->data=item;
        new->left=new->right=NULL;
        root=new;
    }else if(item < root->data){
        root->left = insert(root->left, item);
    }else if(item > root->data){
        root->right = insert(root->right, item);
    }
    return root;
}

node* delete(node * root, int key){
    node *temp;
    if(root==NULL){
        return root;
    }else if(item < root->data){
        root->left=delete(root->left, key);
    }else if(item > root->data){
        root->right = delete(root->right, key);
    }else{
        if((root->left==NULL) && (root->right==NULL)){
            free(root);
            root=NULL;
            return root;
        }else if(root->left==NULL){
            temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            temp = root->left;
            free(root);
            return temp;
        }else{
            temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = delete(root->right, temp->data);
        }
    }
}
void inorder(node *root){
    if(root==NULL)
        return;
    inorder(root->left);
    printf("%d", root->data);
    inorder(root->right);
}
void preorder(node *root){
    if(root==NULL)
        return;
    printf("%d", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d", root->data);
}

int main(){
    int ch, item;

    do{
        printf("-------Tree Traversal-------\n");
        printf("1.Insert\n2.Delete\n3.Inorder\n4.PreOrder\n5.PostOrder\n6.Exit\n");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("Enter the Element");
                scanf("%d", &item);
                insert(root, item);
                break;
            case 2:
                printf("Enter the Element to Delete");
                scanf("%d", &item);
                delete(root, item);
                break;
            case 3:
                inorder(root);
                break;
            case 4:
                preorder(root);
                break;
            case 5:
                postorder(root);
                break;
            case 6:
                printf("Exit");
                break;
            default: 
                printf("Enter the Correct option\n");

        }

    }while(ch != 6);
}