//403110393 mostafa omidi
#include<stdio.h>
int board[12][12];

int validate_coloumn(int bala[][5] , int safhe[][12] , int col , int size_y , int size_x , int row){
    if(row < size_y - 1){
        int bala_count = 0;
        int sum = 0;
        
        for(int i = 0 ; i < size_y ; i++){
            while(safhe[i][col] && i < size_y){
                sum += safhe[i][col];
                i++;
            }
            if(sum <= bala[col][bala_count] && sum != 0){
                sum = 0;
                bala_count++;
            }else if(sum > bala[col][bala_count]){
                return 0;
            }
        }
        
        return 1;
    }
    int bala_count = 0;
    int sum = 0;
    for(int i = 0 ; i < size_y ; i++){
        while(safhe[i][col] && i < size_y){
            sum += safhe[i][col];
            i++;
        }
        if(!sum)
            continue;
        i--;
        if(sum == bala[col][bala_count]){
            sum = 0;
            bala_count++;
        }else{
            if(sum > bala[col][bala_count])
                return 0;
            if (i == row && i != size_y - 1)
                return 1;
            return 0;
        }
    }
    if(bala[col][bala_count])
        return 0;
    return 1;
    
}


int validate_row(int chap[][5] , int safhe[][12] , int row , int col ,int size_x){
    if(col < size_x){
        int chap_count = 0;
        int sum = 0;
        for(int i = 0 ; i < size_x ; i++){
            while(safhe[row][i] && i < size_x){
                sum += safhe[row][i];
                i++;
            }
            if(sum <= chap[row][chap_count] && sum != 0){
                sum = 0;
                chap_count++;
            }else if(sum > chap[row][chap_count]){
                return 0;
            }
        }
            
        return 1;
    }
    int chap_count = 0;
    int sum = 0;
    for(int i = 0 ; i < size_x ; i++){
        while(safhe[row][i] && i < size_x){
            sum += safhe[row][i];
            i++;
        }
        if(!sum)
            continue;
        i--;
        if(sum == chap[row][chap_count]){
            sum = 0;
            chap_count++;
        }else{
            if(sum > chap[row][chap_count])
                return 0;
            if (i == col && i != size_x - 1)
                return 1;
            return 0;
        }
    }
    if(chap[row][chap_count])
        return 0;
    return 1;
    
}


int bazgashti(int r, int c, int size_x, int size_y, int clues_x[][5], int clues_y[][5], int board[][12]) {
    if(c == size_x){
        if(validate_row(clues_y,board,r,c,size_x)){
            return bazgashti(r+1, 0, size_x, size_y, clues_x, clues_y, board);
        }
    }

    if(r == size_y){
        return 1;
    }

    board[r][c] = 1;
    if (validate_row(clues_y,board,r,c,size_x) && validate_coloumn(clues_x,board,c,size_y,size_x,r) && bazgashti(r, c + 1, size_x, size_y, clues_x, clues_y, board)) {
        return 1;
    }

    board[r][c] = 0;
    if (validate_row(clues_y,board,r,c,size_x) && validate_coloumn(clues_x,board,c,size_y,size_x,r) && bazgashti(r, c + 1, size_x, size_y, clues_x, clues_y, board)) {
        return 1;
    }

    return 0;
}




int main(){
    //making our board:
    for(int i = 0 ; i < 12 ; i++){
        for(int j = 0 ; j < 12 ; j++){
            board[i][j] = 0;
        }
    }
    //scanning datas:
    int n , m;
    scanf("%d %d" , &n , &m);
    //these are our clues arrays including k as numbers of clues:
    int up[11][5];
    int left[11][5];
    for(int i = 0 ; i < 11 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            up[i][j] = 0;
        }
    }
    for(int i = 0 ; i < 11 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            left[i][j] = 0;
        }
    }
    for(int i = 0 ; i < n ; i++){
        int k;
        scanf("%d" , &k);
        for(int j = 0 ; j < k ; j++){
            scanf("%d" , &left[i][j]);
        }
    }
    for(int i = 0 ; i < m ; i++){
        int k;
        scanf("%d" , &k);
        for(int j = 0 ; j < k ; j++){
            scanf("%d" , &up[i][j]);
        }
    }
    int a = bazgashti(0,0,m,n,up,left,board);

    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < m ; j++){
            if(board[i][j]){
                printf("EE");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}