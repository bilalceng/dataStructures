#include<stdio.h>
#include<stdlib.h>

struct doubleNode{
int data;
struct doubleNode* prev;
struct doubleNode* next;
};

typedef struct doubleNode dbnd;

dbnd* head  = NULL;

int main(){
    dbnd* newTemp;
    dbnd* temp ;
    int choice = 1;
    int data;

    while(choice){

    printf("please enter data: ");
    scanf("%d", &data);

    dbnd* newNode = (dbnd*)malloc(sizeof(dbnd));
    newNode -> next = NULL;
    newNode -> prev = NULL;
    newNode -> data = data;

    puts("");

    if (head == NULL){

        temp = head = newNode;
    

    }else{

        temp -> next = newNode;

        newNode -> prev = temp;
    
        temp = newNode;
        
    }

    printf("if you want to stop please enter 0: ");
    scanf("%d", &choice);
    

    }
    puts("");
    newTemp = head;

    while(newTemp != NULL){
        printf("%d  ", newTemp -> data);
        newTemp = newTemp -> next;
    }

}