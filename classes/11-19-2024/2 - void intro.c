#include <stdio.h>

//no output function using void

void add_or_minus(int a,int b, int aorm){
    printf("%d " , a);
    // if(aorm > 0){
    //     printf("%d \n" , a + b);
    // }
    // if(aorm < 0)
    //     printf("%d \n", a - b) ;
    // if(aorm == 0)
    //     printf("%d \n" , 0);
}


int main(){
    int a = 5;
    add_or_minus(1,2,1); // gets the 1 as an argument;
    printf("%d \n" , a );

    return 0;
}