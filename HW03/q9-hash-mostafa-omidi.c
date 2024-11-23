//403110393  mostafa omidi

#include <stdio.h>



#define Max_size  100000                     

int main(){
    long long int n , q , p , m;
    scanf("%lld %lld %lld %lld" , &n , &q , &p , &m);



    long long int T[Max_size];
    long long int result_q[Max_size];
    long long int lock[26];
    char str[Max_size];
    for(int i = 0 ; i < 26 ; i++){
        scanf("%lld ", &lock[i]);
    }
    for(int i = 0 ; i < n ; i++){
        scanf(" %c" , &str[i]);
    }

    for(int i = 0 ; i < n ; i++){
        T[i] = str[i] - 'a';
    }


    for(int i = 0 ; i < q ; i++){
        long long int l , r , hash , hash_value = 0;
        scanf("%lld %lld %lld" , &l , &r , &hash);
        long long int p_pow = 1;
        long long int l_mod = l - 1;
        long long int r_mod = r - 1;
        if(l < r){
            for(int j = l_mod ; j <= r_mod ; j++){
                hash_value = (hash_value + lock[T[j]] * p_pow) % m;
                p_pow = (p_pow * p) % m ;
            }
        }else{
            for(int j = l_mod ; j > r_mod - 1 ; j--){
                hash_value = (hash_value + lock[T[j]] * p_pow) % m;
                p_pow = (p_pow * p) % m ;
            }
        }
        result_q[i] = (hash == hash_value) ? 1 : 0;
    }
    for(int i = 0 ; i < q ; i++){
        printf(result_q[i] ? "YES\n" : "NO\n");
    }

    return 0;
}