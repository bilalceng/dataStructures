#include<stdio.h>

int main(){
    int array[50], size, pos;

    printf("please enter size of the array: ");
    scanf("%d",&size);

        puts("");
    
    for(int i = 0 ; i<size ; ++i){
        printf("please neter elements that you want insert array: ");
        scanf("%d" ,&array[i] );
    }

    puts("");

    printf("here is the array:");

    for(int i = 0; i < size ; ++i){
        printf("%d ", array[i]);
    }
    
    puts("");

    printf("please enter position that you want to delete data: ");
    scanf("%d" , &pos);

    puts("");

    if(pos < 0 || pos  >= size ){
        printf("invalid position");
        return -1;
    }

    for(int i = pos ; i < size ; ++i){
        array[i - 1] = array[i];
    }
    size--;

     puts("");

    printf("here is the new array: ");

    for(int i = 0; i < size ; ++i){
        printf("%d ", array[i]);
    }

    puts("");
    return 1;

}