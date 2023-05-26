#include<stdio.h>


int main(){
    int Myarray[5];

    int *p = Myarray;

    printf("%p", p);
    puts("");
    printf("%p", p + 1);// this is valid operation.
    puts("");
    printf("%p", Myarray);// this is valid operation.
    puts("");
    printf("%p", &Myarray); // this is also give position of the array.
    puts("");
    //printf("%p",Myarray++); but you can not change base address of array.So you first have to assign a pointer.
    printf("%p", &p);// this expression wont give the address of the array. it will give the address of pointer itself.
    puts("");
    //sate 1
    printf("%d", Myarray[2]);
    puts("");
    //state 2
    printf("%d", 2[Myarray]);
    puts("");
    //state 3
    printf("%d",2[p]); 
    //state 4
    puts("");
    printf("%d", p[2]);

    //sate 1 = state 2 = state 3 = state 4.
    
    puts("");
    printf("%p", &Myarray + 1); //this expression do not increment array by for byte . it icrements(5*4 = 20bytes)  one full size of array

    // address of first element of array is the same as address of whole element Myarray = &Myarray.

    
    return 0;
}