//403110393

#include <stdio.h>


unsigned long long int max(unsigned long long int a , unsigned long long int b){
    if(a > b){
        return a;
    }
    return b;
}

unsigned long long int gcd(unsigned long long int a , unsigned long long int b){
    if(a%b == 0){
        return b;
    }
    return gcd(b , a%b);
}

int main(){
    unsigned long long int a , b;
    scanf("%llu %llu" , &a , &b);
    printf("%llu" , gcd( max(a , b) , a+b-max(a , b)));
    return 0;
}