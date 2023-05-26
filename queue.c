#include<stdio.h>
#include<stdlib.h>

struct queue {
    int data;
    struct queue * next;
};



typedef struct queue q;
 
q* front = NULL;
q* rear = NULL;

void dequeue();
void enqueue(int data);
void display();
q* getNewNode(int data);

int main(){
    enqueue(13);
    enqueue(12);
    enqueue(11);
    enqueue(10);
    enqueue(9);
    
    dequeue();
    display();
}

void enqueue(int data){

if(front == NULL){
    front =  rear = getNewNode(data);
}

else{

    rear -> next = getNewNode(data);
    rear = rear -> next;
}

}

void dequeue(){
    if (front == NULL){
        puts("list is already empty");
    }

    else{
        q* temp = front;
        front  = front -> next;
        free(temp); 
    }
}

void display(){
    q* temp = front;

    while(temp != NULL){
        printf("%d - " , temp -> data);
        temp = temp -> next;
    }
    return;
}

q* getNewNode(int data){
    q* newNode = (q*)malloc(sizeof(q));
    newNode -> next = NULL;
    newNode -> data = data;
    return newNode;
}
