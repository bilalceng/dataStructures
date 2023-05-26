#include<stdio.h>


void get(int n){
    if( n < 1 )
        return;

        get(n - 1);
        printf("%d  ", n);
        get(n - 3);
        
        printf("-----%d  " , n);
}

int main(){
    get(6);
}