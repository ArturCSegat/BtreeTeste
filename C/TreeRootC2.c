#include <stdio.h>

struct Node{
    int val;
    struct Node *left;
    struct Node *right;
    
};

struct Node* createNode(int val){
    struct Node* newNode = malloc(sizeof(struct Node));

    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct Node* insertLeft(struct Node* root, int val){
    root->left = createNode(val);

    return root->left;
}

struct Node* insertRight(struct Node* root, int val){
    root->right = createNode(val);

    return root->right;
}

void traverse(struct Node* root){
    if(root == NULL){return;}
    printf("%d -> ", root->val);
    traverse(root->left);
    traverse(root->right);
}


int main(){

    struct Node* root = createNode(10);

    insertLeft(root, 9);
    insertRight(root, 11);
    insertLeft(root->left, 7);

    traverse(root);

    return 0;
}