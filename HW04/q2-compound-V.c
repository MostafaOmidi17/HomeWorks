//403110393 mostafa omidi

#include <stdio.h>
#include <math.h>

//defining a function that prints out our matrice
void print_natije(int n , int m){
    int a[2][2];
    a[0][0] = 0 , a[0][1] = 1;
    a[1][0] = 2 , a[1][1] = 3;
    //defining a memory matrice that we put our numbers in it.
    int mem[1024][1024];
    //at first we put our initial numbers in it.
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            mem[i][j] = a[i][j];
        }
    }
    //we define 4 matrices that save our refrations.
    int Baztab[1024][1024];
    int Baztab_ur[1024][1024];
    int Baztab_dr[1024][1024];
    int Baztab_dl[1024][1024];

    for(int i = 2 ; i < n + 1 ; i++){
        int a = pow(2 , i);
        for(int m = 0 ; m < a/2 ; m++){
            for(int n = 0 ; n < a/2 ; n++){
                //putting the values of our matrices.
                Baztab[n][m] = mem[n][m];
                Baztab_ur[n][m] = mem[n][m] + 1;
                Baztab_dr[n][m] = mem[n][m] - 1;
                Baztab_dl[n][m] = mem[a/2 - n - 1][a/2 - m - 1];
            }
        }
        for(int j = 0 ; j < a ; j++){
            for(int k = 0 ; k < a ; k++){
                if(((j > -1)&&(j < a/2))&&((k>-1)&&(k < a/2))){ // creating our new matrice.
                    mem[j][k] = Baztab[j][k];
                }else if(((j>a/2 - 1)&&(j < a))&&((k>-1)&&(k < a/2))){
                    mem[j][k] = Baztab_dr[a - j - 1][k];
                }else if(((j>-1)&&(j < a/2))&&((k>a/2 - 1)&&(k < a))){
                    mem[j][k] = Baztab_ur[j][a - k - 1];
                }else if(((j>a/2 - 1)&&(j < a))&&((k>a/2 - 1)&&(k < a))){
                    mem[j][k] = Baztab_dl[j - a/2][k - a/2];
                }
            }
        }
    } 
    int len = pow(2 , n);
    int ans[m];
    for(int i = 0 ; i < m ; i++){
        int j , k;
        scanf("%d %d" , &j , &k);
        ans[i] = mem[j][k];
    }
    //printing out our answer matrice.
    for(int i = 0 ; i < m ; i++){
        printf("%d " , ans[i]);
    }
}




int main(){
    int n , m ;
    scanf("%d %d" , &n , &m);
    print_natije(n , m);
    return 0;
}