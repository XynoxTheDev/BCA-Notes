#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node *root;

void ins(struct node *n, int val, int opt){
    struct node *t;
    t = (struct node *) malloc(sizeof(struct node));
    t->data = val;
    t->right =  t->left = NULL;

    if(opt == 1)
        n->left = t;
    else
        n->right = t;

    printf("\n%d is inserted", val);

    if(opt==1){
        printf(" at the left\n");
    }
    else{
        printf(" at the right\n");
    }
}

void insert(struct node *t, int x){
    if(t->data == 0){
        t->data = x;
        printf("Created the root node with value: %d\n", x);
        return;
    }

    if(t->data > x)
        if(t->left == NULL)
            ins(t, x, 1);
        else
            insert(t->left, x);
    else if(t->data < x)
        if(t->right == NULL)
            ins(t, x, 2);
        else
            insert(t->right, x);
    else
        printf("\n Element is already present in the list\n");
}

void inorder(struct node *p){
    if(p!=NULL){
        inorder(p->left);
        printf("  %d", p->data);
        inorder(p->right);
    }
}

void preorder(struct node *p){
    if(p!=NULL){
        printf("  %d", p->data);
        inorder(p->left);
        inorder(p->right);
    }
}

void postorder(struct node *p){
    if(p!=NULL){
        inorder(p->left);
        inorder(p->right);
        printf("  %d", p->data);
    }
}

int main(){
    int op, n;
    root = (struct node*) malloc(sizeof(struct node));
    root->right = root->left = NULL;
    root->data = 0;

    do{
        printf("\n\n1. Insertion \n");
        printf("2. Preorder \n");
        printf("3. Inorder \n");
        printf("4. Postorder \n");
        printf("5. Quit \n");
        printf("Enter your choice: ");
        scanf("%d", &op);

        switch(op){
            case 1:
                printf("\nEnter the element to insert: ");
                scanf("%d", &n);
                insert(root, n);
                break;

            case 2:
                printf("\nThe Preorder Elements are: ");
                preorder(root);
                break;

            case 3:
                printf("\nThe Inorder Elements are: ");
                inorder(root);
                break;

            case 4:
                printf("The Postorder Elements are: ");
                postorder(root);
                break;

            case 5:
                exit(0);
        }
    }while(op<5);
}
