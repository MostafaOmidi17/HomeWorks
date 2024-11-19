//403110393 mostafa omidi

#include<stdio.h>
#include<math.h>


int main(){
    unsigned long long int n;
    scanf("%llu" , &n);
    unsigned long long int a[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%llu" , &a[i]);
    }
    for(int i = n - 1 ; i >= 2 ; i--){
        if( a[i-2] + a[i-1] > a[i] ){
            printf("%llu", a[i-2] + a[i-1] + a[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}