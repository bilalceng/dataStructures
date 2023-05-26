#include<stdio.h>
#include<stdlib.h>


struct doubleNode{

    int data;
    struct doubleNode* prev;
    struct doubleNode* next;

};

typedef struct doubleNode db;

db* head = NULL;

db* tail = NULL;

void insertAtEnd(int data);
void insertAtBegining(int data);
void insertAtCertainPosition();
void displayList();
db* createNode();


int main(){
    insertAtBegining(23);
    insertAtBegining(12);
    insertAtBegining(50);
    insertAtBegining(23);
    insertAtBegining(12);
    insertAtBegining(50);
    insertAtBegining(23);
    insertAtBegining(12);
    insertAtBegining(50);
    insertAtBegining(23);
    insertAtBegining(12);
    insertAtBegining(50);
    insertAtCertainPosition();
    displayList();
}

db* createNode(){
    db* newNode = (db*)malloc(sizeof(db));
    newNode -> prev = NULL;
    newNode -> next = NULL;
   
    return newNode;
}

void insertAtEnd(int data){

    db* newNode = createNode();
    newNode -> data = data;

    if (head == NULL){
        
        head = tail = newNode;

    }
    else{

        tail -> next = newNode;
        newNode -> prev = tail;
        tail = newNode;

    }
}

void displayList(){

    db* temp = head;

    while(temp != NULL){
        printf("%d ", temp -> data);
        temp  = temp -> next;
    }
}

void insertAtBegining(int data){

    db* newNode = createNode();
    newNode -> data  = data;

    if (head == NULL){

        head = tail  = newNode;
    }
    else{

        head -> prev = newNode;
        newNode -> next = head;
        head = newNode;
    }
}

void insertAtCertainPosition(){
int data;
int pos;
db* temp;
int counter = 0;
db* newNode = createNode();

printf("please enter number that you want to insert: ");
scanf("%d", &data ); 

newNode -> data = data;

printf("please enter position that you want ot insert: ");
scanf("%d", &pos);


if(pos == 0){

    if (head == NULL){

        head = tail  = newNode;
    }
    else{

        head -> prev = newNode;
        newNode -> next = head;
        head = newNode;
    }
    
}else{

    temp = head;

    while(counter < pos){
        temp  = temp -> next;
        counter++;

    }

    if(temp -> next == NULL){

        tail -> next = newNode;
        newNode -> prev = tail;
        tail = newNode;
        
    }else{

    temp -> prev -> next = newNode;
    newNode -> prev = temp -> prev;
    newNode -> next = temp;
    temp -> prev = newNode;

    }

  
}

 
}
