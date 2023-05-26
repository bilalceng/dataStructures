#include<stdio.h>
#include<stdlib.h>

struct stack{
    int data;
    struct stack* link;
};

typedef struct stack st;

st* top;

int push(int data);
int display();
int pop();

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    display();
}

int push(int data){
    if(top == NULL){
        st* new = (st*)malloc(sizeof(st));
        new -> data = data;
        new -> link = NULL;

        top = new;
        return 1;
    }
    else{

        st* new = (st*)malloc(sizeof(st));
        new ->link = top;
        new ->data = data;

        top = new;
    return 1;
    }
    return 1;
    
}

int display(){

    if(top == NULL){
        puts("list is empty.");
    }
    st* index = top;

    while(index != NULL){
        printf("%d - " ,index ->data);
        index = index -> link;
    }
    puts("");
    return 1;

}

int pop(){
    if(top == NULL){
        puts("list is already empty");
        return 1;
    }

    st* temp = top;
    top = top ->link;
    free(temp);
    return 1;
    
}