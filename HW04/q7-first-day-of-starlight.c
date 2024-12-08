//403110393 mostafa omidi


#include <stdio.h>
int natijeh = 0;
int results[1000] ;
int ragham(long long int n){
    int digit = 0;
    while(1){
        n = n/10;
        digit++;
        if(n==0){
            return digit;
        }
    }
    return digit;
}



int bazgshti(long long int n , int m , int a[]){
    int x = n%10 ;
    int checker;
    if(!n){
        return 1;
    }
    for(int i = 0 ; i < m ; i++){
        if(a[i]==x && ragham(a[i]) == 1){
            results[natijeh] = i;
            natijeh++;
            checker = bazgshti(n/10 , m , a);
            if(checker){
                return checker;
            }else{
                natijeh--;
            }
        }

    }
    x = n%100;
    for(int i = 0 ; i < m ; i++){
        if(a[i]==x && ragham(a[i]) == 2){
            results[natijeh] = i;
            natijeh++;
            checker = bazgshti(n/100 , m , a);
            if(checker){
                return checker;
            }else{
                natijeh--;
            }
        }

    }
    x = n % 1000;
    for(int i = 0 ; i < m ; i++){
        if(a[i]==x && ragham(a[i]) == 3){
            results[natijeh] = i;
            natijeh++;
            int checker = bazgshti(n/1000 , m , a);
            if(checker){
                return checker;
            }else{
                natijeh--;
            }
        }

    }
    return 0;
}


int main(){
    long long int n;
    int m;
    scanf("%lld %d" , &n , &m);
    int q[m];
    for(int i = 0 ; i < 1000 ; i++){
        results[i] = -1;
    }
    
    for(int i = 0 ; i < m ; i++){
        scanf("%d" , &q[i]);
    }


    if(bazgshti(n,m,q)){
        for(int i = natijeh - 1 ; i >= 0 ; i--){
            printf("%d " , results[i]);
        }
    }else{
        printf("%d" , -1);
    }
    return 0;
}