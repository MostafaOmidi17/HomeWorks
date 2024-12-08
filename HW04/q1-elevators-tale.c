//403110393 mostafa omidi.

#include <stdio.h>
// segement(long long a);
// base(long long a , long long b);
// base_rev(long long a , long long b);


//for going into decimal base;
long long base(long long a , long long b){
    long long sum = 0;
    long long pow = 1;
    while(a > 0){
        sum = sum + (a%10) * pow;
        a = a/10;
        pow = pow * b;
    }
    return sum;
}



//for going into b base;
long long base_rev(long long a , long long b){
    long long sum = 0;
    long long pow = 1;
    while(a>0){
        sum = sum + (a%b) * pow;
        a = a/b;
        pow = pow * 10;
    }
    return sum;
}


//for segment values
long long segement(long long a){
    switch (a)
    {
    case 0:
        return 6;
        break;
    case 1:
        return 2;
        break;
    case 2:
        return 5;
        break;
    case 3:
        return 5;
        break;
    case 4:
        return 4;
        break;
    case 5:
        return 5;
        break;
    case 6:
        return 6;
        break;
    case 7:
        return 3;
        break;
    case 8:
        return 7;
        break;
    case 9:
        return 6;
        break;
    }
}



//final value that we are looking for
long long final_value(long long a){
    long long i = 0;
    while(a>0){
        i = segement(a%10) + i;
        a = a/10;
    }
    return i;
}

int main(){
    long long n , a , b;
    long long temp;
    scanf("%llu %llu %llu" , &n , &a , &b);
    if(n!=0){
        temp = final_value(base_rev(base(n , a) , b));
        printf("%llu" , temp);
    }else{
        printf("%d" , 6);
    }
    return 0;
}