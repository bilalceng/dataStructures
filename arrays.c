#include<stdio.h>

int main(void){
    float arrayfloat[8];//garbage values
    float arrayfloat2[8] = {1.0,2.9};// empty nodes are 0.000000
    char array[8] = {'c','3'};//empty nodes are null(empty)
    char array2[8];// all of nodes null(empty)
    //array2[3] = 'w';empty places filled with null
    int number = 5;// empty places are filled with gabage
    int arr[10]  ;// filled with garbage values

    int arr2[10] = {1,2,3,4};//empty places is  0
   

// for character arrays remaining values are empty(null) after 8th element system start to give garbage values. 
   
   for(int i = 0 ; i < 20 ; ++i){
    //printf("%c ", array[i]);
   }
// one value assigned  char arrays fills witn null except assigned value.after 8th element sytem start to give garbage value. if antyhing not assigned all elements in char array will become null.
    for(int i = 0 ; i < 20 ; ++i){
    //printf("-%c-", array2[i]);
   }

    for(int i = 0 ; i <8 ; ++i){
    //printf("-%f-", arrayfloat[i]);
   }

    for(int i = 0 ; i <8 ; ++i){
    printf("-%f-", arrayfloat2[i]);
   }
    
puts("");
puts("");
puts("");
      int array3[2][3] = {1,2,3,4,5,6};
      int array1[10];
      array1[3] = 10;

   for(int i = 0 ; i < 2  ; ++i){
    for (int j = 0 ; j < 3 ; ++j){
        printf("%d", array3[i][j]);
    }
   }
    puts("");
   int * pointer;

   pointer = array3;


    printf("%p", pointer);
    puts("");

    printf("%p", array3 + 1); // array3 is the address of first row.
    puts("");

    printf("%p", *array3 + 1);// *array3 is the address of first element.
    puts("");

    printf("%p", &array3 + 1);// &array3 is the addres of whole array.
    puts("");

    printf("%p", &array3[0][0] + 1);
    puts("");

    printf("%p", &array3 + 1);
    puts("");

     printf("%d", 2[array3[1]]);//2[array3[1]]  = array3[1][2] = 6.
    puts("");

    printf("%d", *array3[0]);// -> 1
    puts("");

    
   puts("");
   
   for(int i =0 ; i < 10 ; ++i){
       printf("%d  ", array1[i] );
   }
}


    
