#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}node;

node *add(int val){
    node *temp = (node*)malloc(sizeof(struct node));
    temp->data = val;
    temp->right = temp->left = NULL;
    return temp;
}

node *insert(node *tree, int key){
    if(tree==NULL){
        return add(key);
    }
    if(key<=tree->data){
        tree->left = insert(tree->left, key);
    }
    else if(key>tree->data){
        tree->right = insert(tree->right, key);
    }
}
void inorder(node *tree){
    if(tree!=NULL){
        inorder(tree->left);
        printf("%d ",tree->data);
        inorder(tree->right);
    }
}

void preorder(node *tree){
    if(tree!=NULL){
        printf("%d ",tree->data);
        preorder(tree->left);
        preorder(tree->right);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int key;
    node *tree = NULL;
    for(int i=0; i<n; i++){
        scanf("%d",&key);
        tree = insert(tree, key);
    }
    inorder(tree);
    preorder(tree);
}