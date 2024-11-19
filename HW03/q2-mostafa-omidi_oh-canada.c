//403110393 mostafa omidi
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d" , &n);
    unsigned long long int a[n];
    int b[n];
    for(int i = 0 ; i < n ; i++){
        int digit = 0;
        scanf("%llu" , &a[i]);
        int controller = a[i] % 10;
        unsigned long long int num = a[i] / 10;
        int power = 2;
        while(power < 11){
            digit = num%10 * power + digit ;
            num = num/10;
            power += 1 ;
        }
        int remainer = digit % 11;
        int remants = 11 - remainer;
        switch(remainer){
            case 0:
                if(controller == remainer){
                    b[i] = 1;
                }else{
                    b[i] = 0;
                }
                break;
            case 1:
                if(controller == remainer){
                    b[i] = 1;
                }else{
                    b[i] = 0;
                }
                break;
            default:
                if(controller == remants){
                    b[i] = 1;
                }else{
                    b[i] = 0;
                }
                break;
        }
    }
    for(int j = 0 ; j < n ; j++){
        if(b[j] != 0){
            printf("YES\n") ;
        }else{
            printf("NO\n") ;
        }
    }
    return 0;
}