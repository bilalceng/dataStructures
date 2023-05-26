#include<stdio.h>
#include<stdlib.h>

 struct student{
    int data;
    struct student * next;
};

typedef struct student std;

std* head = NULL;
std* tail = NULL;

int addLastData(int data);
int addFirstData(int data);
int deleteData(int data);
int reverseList();
void print();


int main(){
    
   addLastData(89);
   addLastData(15);
   addLastData(23);
   addLastData(96);
   addLastData(66);
 
    print();

}

int addLastData(int data){

          std* new = (std*)malloc(sizeof(std));
          new ->data = data;
          new ->next = NULL;


    if(head == NULL){
    
          head = tail = new;
    }

    else{
     
        tail -> next = new;
        tail = new; 
    }

    return 1;
 
}

int addFirstData(int data){

    if(head == NULL){

    std* new = (std*)malloc(sizeof(std));
    new ->data = data;
    new ->next = NULL;

    head  = tail = new;
    }

    else{

          std* new = (std*)malloc(sizeof(std));
          new ->data = data;
          new ->next = NULL;


          new ->next = head;
          head = new;
    }

    return 1;
}

void print(){

    std* index = head;

    if(head == NULL){
        puts("list is empty");
    }

    while(index  != NULL){
        printf("%d - " , index ->data);

        index = index ->next;
    }
    free(index);
}

int deleteData(int data){

    std* prev = NULL;
    std* index = head;

    if (head == NULL){
        puts("list is already empty.");
        return 1;
    }

    if (head -> data == data){
        std* temp = head;
        head = head -> next;
        free(temp);
        
        return 1;
    }

    while(index != NULL && index -> data != data){
            prev = index;
            index = index -> next;
    }

    if(index == NULL){
        puts("you are looking for invalid data");
        return 1;

    }
     
     if(tail -> data == data){
            tail = prev;
        }
        
    prev -> next = index -> next;
        
    free(index);
    return 1;

}

 reverseList(){
    std* prev = NULL;
    std* next = NULL; 

    if(head == NULL){
        puts("list is already empty.");
        return ;
    }

    while(head != NULL){
        next =  head -> next;
        head -> next = prev;
        prev = head;
        head = next;
    }
    
    head = prev;
    return ;
}