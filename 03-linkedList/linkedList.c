#include <stdio.h>
#include <stdlib.h>

// Linked List 
struct node {
    int data;
    struct node *next;
};

// Head & Tail 
struct node *head = NULL;
struct node *tail = NULL;

// Add Node 
int addNode(int data){

    // Linked List is empty
    if(head==NULL){
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        head = tail = new; 
    }
    // Linked List's not empty
    else {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        tail->next = new; 

        tail = new;
    }

    return 1;
}

// Add Node to Head 
int addNodeHead(int data){
    // Linked List is empty 
    if(head==NULL){
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        head = tail = new;
    }
    // Linked List's not empty
    else {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = head;

        head = new;
    }
}

// Print 
int print(){
    printf("Linked List: ");
    struct node *index = head;
    while(index!=NULL){
        printf("%d - ", index->data);
        index = index->next;
    }
    printf("\n");
    return 1;
}

// Delete Node 
int delete(int data){

    struct node *prev = NULL;
    struct node *index = head;

    // Linked List is empty
    if(head==NULL){
        printf("Linked List is empty \n");
        return 1;
    }

    // Delete Head Node
    if(head->data==data){
        struct node *t = head;
        head = head->next;
        free(t);
        return 1;
    }

    // Search in Linked List
    while(index!=NULL && index->data!=data){
        prev = index;
        index = index->next;
    }

    // Data not found
    if(index==NULL){
        printf("Data not found. \n");
        return 1;
    }

    // Data found
    prev->next = index->next;

    // Delete Tail Node
    if(tail->data==data){
        tail = prev;
    }

    // Clean Memory
    free(index);

    return 1;
}

int main(){

    addNode(10);
    addNode(14);
    addNode(16);
    addNode(19);

    addNodeHead(15);
    addNodeHead(7);

    addNode(30);

    print();

    delete(7);
    print();

    delete(30);
    print();

    delete(55);

    delete(15);
    delete(10);
    delete(14);
    delete(16);
    delete(19);

    print();

    delete(15);

    addNode(5);
    addNode(7);
    addNodeHead(3);
    addNodeHead(1);
    print();

    return 1;
}