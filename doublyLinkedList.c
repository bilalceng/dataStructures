#include<stdio.h>
#include<stdlib.h>

struct doub{
    int data;
    struct doub * prev;
    struct doub * next;
};

typedef struct doub db;

db* head = NULL;

db* getNewNode(int data);
void addFirstNode(int data);
void addLastNode(int data);
void deleteNode(int data);
void reverseTheList();
void printNode();


int main(){
  addFirstNode(1);
  addFirstNode(2);
  addFirstNode(3);
  addFirstNode(4);
  addFirstNode(5);
  addFirstNode(6);


    deleteNode(6); 
    deleteNode(1); 
    deleteNode(3);
    deleteNode(2); 
    deleteNode(4);
    deleteNode(5);

   printNode();
}

db* getNewNode(int data){
    db* newNode = (db*)malloc(sizeof(db));
    newNode ->data = data;
    newNode ->next = NULL;
    newNode ->prev = NULL;
    return newNode;
}


void addFirstNode(int data){
    db* newnode = getNewNode(data);
    if(head == NULL){
        head = newnode;
        return;
    }

    else{
        newnode -> next = head;
        head -> prev = newnode;
        head = newnode;
        return;
    }


}

void printNode(){
    db* temp = head;

    while(temp != NULL){
        printf("%d - ", temp ->data);
        temp = temp -> next ;
    }

    free(temp);
    return;
}

void reverseTheList(){

    db* temp = head;
    if (head == NULL){
        puts("list is empty.");
    }

    while(temp -> next != NULL){
        temp  = temp ->next; 
    }

    while(temp != NULL){
        printf("%d - ", temp -> data);
        temp = temp -> prev;
    }
}

void deleteNode(int data){
    db* index = head;

    if (head == NULL){
        puts("list is already empty.");
        return;
    }


    if(head -> data == data){
        
     db* temp = head;
      
    head = head ->next;
      
     free(temp);
    
     
    
     return;
    }
  
    while(index ->next != NULL && index ->data != data){
        index = index -> next ;
    }

    if(index -> next == NULL){

    db* index2 = index -> prev;

    index2 -> next  = NULL;
    free(index);
    index = NULL;
    return;
    }

    (index -> prev) -> next = index ->next;
    (index -> next) -> prev = index -> prev; 
    free(index);
    index = NULL;

}

void addLastNode(int data){
    db* temp = head;
    
    if (head == NULL){
        head = getNewNode(data);
    }
    

    while(temp -> next != NULL){
        temp = temp ->next ;
    }


    db* newNode = getNewNode(data);

    temp -> next = newNode;
    newNode ->prev = temp;
    
}

