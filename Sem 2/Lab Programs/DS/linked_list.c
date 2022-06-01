#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *start = NULL;

void traversal(){
    struct node *temp;
    if(start == NULL){
        printf("\nThe list is empty\n");
    }
    else{
        temp = start;
        printf("\nTraversing the linked list:\n");
        while(temp != NULL){
            printf("Data = %d\n", temp->info);
            temp = temp->link;
        }
    }
}

void createList(){
    if(start == NULL){
        int n;
        printf("\nEnter the no of nodes: ");
        scanf("%d", &n);
        if(n!=0){
            int data;
            struct node *newnode;
            struct node *temp;
            newnode = malloc(sizeof(struct node));
            start = newnode;
            temp = start;
            printf("Enter the number to be inserted: ");
            scanf("%d", &data);
            start->info = data;
            for(int i=2; i<=n; i++){
                newnode = malloc(sizeof(struct node));
                temp->link = newnode;
                printf("Enter the number to be inserted: ");
                scanf("%d", &data);
                newnode->info = data;
                temp = temp->link;
            }
        }
        printf("\nThe list is created\n");
    }
    else{
        printf("\nThe list is already created\n");
    }
}

void insertAtFront(){
    int data;
    struct node *temp;
    temp = malloc(sizeof(struct node));
    printf("Enter the number to be inserted: ");
    scanf("%d", &data);
    temp->info = data;
    temp->link = start;
    start = temp;
}

void insertAtEnd(){
    int data;
    struct node *temp, *head;
    temp = malloc(sizeof(struct node));
    printf("Enter the number to be inserted: ");
    scanf("%d", &data);

    temp->link = 0;
    temp->info = data;
    head = start;
    while(head->link != NULL){
        head = head->link;
    }
    head->link = temp;
}

void insertAtPosition(){
    struct node *temp, *newnode;
    int pos, data, i=1;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter position and data: ");
    scanf("%d %d", &pos, &data);
    temp = start;
    newnode->info = data;
    newnode->link = 0;
    while(i < pos-1){
        temp = temp->link;
        i++;
    }
    newnode->link = temp->link;
    temp->link = newnode;
}

void deleteFirst(){
    struct node *temp;
    if(start == NULL){
        printf("\nList is empty\n");
    }
    else{
        temp = start;
        start = start->link;
        free(temp);
    }
}

void deleteEnd(){
    struct node *temp, *prevnode;
    if(start == NULL){
        printf("\nList is empty\n");
    }
    else{
        temp = start;
        while(temp->link != 0){
            prevnode = temp;
            temp = temp->link;
        }
        free(temp);
        prevnode->link=0;
    }
}

void deletePosition(){
    struct node *temp, *position;;
    int i=1, pos;
    if(start == NULL){
        printf("\nList is empty\n");
    }
    else{
        printf("\nEnter the index: ");
        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = start;
        while(i<pos-1){
            temp = temp->link;
            i++;
        }
        position = temp->link;
        temp->link = position->link;
        free(position);
    }
}

int main(){
    int choise;
    printf("Creating the list\n");
    createList();

    while(1){
        printf("\n1 to see list\n");
        printf("2 for insertion at start\n");
        printf("3 for insertion at the end \n");
        printf("4 for insertion at any position \n");
        printf("5 for deletion of first element \n");
        printf("6 for deletion of the last element \n");
        printf("7 for deletion of element at any position \n");
        printf("8 to exit \n");
        printf("\nEnter the choise: ");
        scanf("%d", &choise);

        switch(choise){
            case 1:
                traversal();
                break;

            case 2:
                insertAtFront();
                break;

            case 3:
                insertAtEnd();
                break;

            case 4:
                insertAtPosition();
                break;

            case 5:
                deleteFirst();
                break;

            case 6:
                deleteEnd();
                break;

            case 7:
                deletePosition();
                break;

            case 8:
                exit(0);
                break;

            default:
                printf("Incorrect Choise\n");
        }
    }
}
