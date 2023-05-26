#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node * link;
};

typedef struct node nd;

nd* head = NULL;
nd* temp;


int main(){

    int choice;
    int data;

    do{

        printf("please enter data that you want to add list: " );
        scanf("%d", &data);


        nd* new = (nd*)malloc(sizeof(nd));
          new ->data = data;
          new -> link = NULL;

        
        if(head == NULL){
            
            head = temp = new;
            
        }
        else{
             
            temp -> link = new;
            temp = new;
             
        }

        puts("");

        printf("please enter your choice to continue: ");
        scanf("%d", &choice);

    }while(choice);
        
        temp = head;

     while(temp != NULL){
            printf("%d ", temp -> data );
            temp = temp -> link;
        }

        
        puts("");

    puts("you exit the programm");

}

