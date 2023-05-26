#include<stdio.h>

#define N  5
int queue[N];
int front = -2;
int rare = -2;

void enqueue(int data);
void dequeue();
void display();
int main(){
    enqueue(12);
     enqueue(13);
      enqueue(14);
       enqueue(15);
       enqueue(17);
       dequeue();
       dequeue();
       
   display();
}

void enqueue(int data){
    if (front == -2 && rare == -2){
        rare = front = 0;
        queue[rare] = data;
    }

    else if((rare + 1)%N == front){
        puts("queue is full.");
    }
    
    else{
        rare = (rare + 1)% N;
        queue[rare] = data;
    }
}

    void dequeue(){
        if (front == -2 && rare == -2){
        puts("the is empty");
    }
    

    else if(rare == front){
        rare = front = -2;
    }

    else{
        front = (front + 1) % N;
    }
}

void display(){
    int i = front;

    if(rare == -2 && front == -2 ){
        puts("queue is empty.");
        return;
    }
    
    while(i != rare ){
        printf("%d - ", queue[i]);
        i = (i+1) % N;
    }
    printf("%d", queue[i]);
}
