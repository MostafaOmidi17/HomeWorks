#include <stdio.h>
//recursive function. fibonachi example.
//fibonachi numbers.

int mem[1000];

//this function is not a good recursive function. becasue it calls functions multiple times!
int fibo(int n){
    if(n == 1 || n == 2){
        mem[n] = 1;
        return 1;
    }
    if(mem[n-1] == -1)
        fibo(n-1);
    if(mem[n-2] == -1)
        fibo(n-2);
    mem[n] = mem[n-1] + mem[n-2];
    return mem[n];
}

//memoized recursive call


int main(){
    for(int i = 0 ; i < 1000; i++)
        mem[i] = -1;
    printf("%d" , fibo(40));
    return 0;
}