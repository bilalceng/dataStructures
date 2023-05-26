#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};



typedef struct node nd;

int counter = 0;

nd* head = NULL;

nd* provideNode();

void displayList();

void addStart(int data);

void addLast(int data);

void addGivenPosition();

void deleteFirst();

void deleteLast();

void reverseTheList();

void deleteGivenPosition();

void length();



int main(){
    addLast(500);
    addStart(13);
    addStart(12);
    addStart(42);
    addStart(17);
    addLast(100);
   
    deleteLast();
    deleteFirst();

    deleteGivenPosition();

    //reverseTheList(); 500 13 12 42

    length();


 
 
 
    displayList();
}

nd* provideNode(){

    nd* newNode = (nd*)malloc(sizeof(nd));
    newNode -> link = NULL;


    return newNode;
}

void displayList(){

    nd* temp;
    temp = head;

    if(head == NULL){
    
        puts("List is empty.");
    }

    while(temp != NULL){
        printf("%d  ", temp -> data);
        temp = temp -> link; 
       
    }
    puts("");
}

void addStart(int data){

    if(head == NULL){
        nd* newNode =  provideNode();
        newNode -> data = data;
        head = newNode;

    }
    else{
        nd* newNode = provideNode();
        newNode -> data = data;
        newNode -> link = head;
        head = newNode;
    }
}

void addLast(int data){

    nd* temp;
    if(head == NULL){
        nd* newNode = provideNode();
        newNode -> data = data;
        head = newNode;
    }
    else{
        temp = head;
        while(temp -> link != NULL){
            temp = temp -> link;
        }

        nd* newNode = provideNode();
        newNode -> data = data;
        temp -> link = newNode;
    }
}

void addGivenPosition(){
    int position, data;
    nd* temp, *index;
    temp = head;
    index = head;

    do{
    printf("please enter position that you want to enter data: ");
    scanf("%d",&position);

    position--;

     while(index != NULL){
        
        counter++;
        index = index -> link; 
    }

    }while (position > counter || position < 0);
    
    puts("");

    printf("please enter data:  ");
    scanf("%d", &data);

    nd* newNode = provideNode();
    newNode -> link = NULL;
    newNode -> data = data;
    

    for(int i = 1 ; i < position ; ++i){
     
        temp = temp -> link;

    }

    newNode -> link = temp -> link;
    temp -> link = newNode;

    return;
}

void deleteLast(){
    nd* prev;
    nd* next;
    
    next = head;

    if (next == NULL)
    {
        puts("List is already empty.");
        exit(0);
    }

    while(next -> link != NULL){
        prev = next;
        next = next -> link;
    }
    if(next == head){
        head == NULL;
        free(next);
    }else{
        prev -> link = NULL;
        free(next);
    }
    
    }

    void length(){

        nd* temp;
        temp = head ; 

        while(temp != NULL){
            counter++;
            temp  = temp -> link;
        }
        puts("");
        printf("there are %d elements in the list", counter);
        puts("");
    }


void deleteFirst(){

    nd* temp;

    temp = head;

    if(head == NULL){
        puts("list is empty");
        exit(0);
    }

    head = head -> link;

    free(temp);

}

void deleteGivenPosition(){
    nd* next;
    nd* prev;
    int i = 0;

    int position;

    if(head == NULL){
        puts("list is already empty.");
    }

    next = head;
    
    puts("");

    printf("enter position that you wan to delete: ");
    scanf("%d", &position);

    puts("");

    while(i < position - 1){

        prev = next; 
        next = next -> link;
        i++;
    }

    prev -> link = next -> link;
    free(next);

}


void reverseTheList(){

    nd * previous , *current , *next;

    current = next = head;

    previous = NULL;

    while( next != NULL){

        next = next -> link;
        current -> link = previous;
        previous = current;
        current = next;
        
    }
    head = previous;

}


