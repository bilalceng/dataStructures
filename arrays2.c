#include<stdio.h>

int main(void){
   
    int array[50], size , pos, num;

    printf("please enter size of your array: ");
    scanf("%d" ,&size);

     

     for(int i = 0 ; i < size ; ++i){
        printf("please  enter your elements: ");
        scanf("%d", &array[i]);
     }
        puts("\n");
     for(int i = 0 ; i<size; ++i){
        printf("%d ", array[i]);
     }
     puts("\n");

     printf("please enter your position that you want to add: ");
     scanf("%d", &pos);

      if( 0 < pos && pos < size + 1){
   

      printf("please enter your number that you want to add: ");
     scanf("%d", &num);

      for(int i = size - 1 ; pos - 1 <= i ; --i){
       array[i + 1] = array[i];
       
     }
     size++;
     array[pos - 1] = num;

   
   }
   else{
   
     printf("invalid position value.");
   }
 
  

          puts("\n");
     for(int i = 0 ; i<size ; ++i){
        printf("%d ", array[i]);
     }
}