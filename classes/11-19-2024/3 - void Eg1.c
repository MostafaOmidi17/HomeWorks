#include <stdio.h>
// here is global scope mother fucker
//no output function using void

int a = 10;


void print_alaki(int ali ,int b, int aorm){
    // int a = 5 ; we cannot do this shit
    printf("%d " , a);

}


int main(){
    int a = 5;
    add_or_minus(1,2,1); // gets the 1 as an argument;
    printf("%d \n" , a );
    //output 10 5 function doesn't have the value of a so it gets it from the global value
    return 0;
}