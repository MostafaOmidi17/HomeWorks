//403110393 mostafa omidi

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int faza[m][n];

    // Initializing the board
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &faza[i][j]);
        }
    }

    int number_of_boats = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(faza[i][j]==1){
                number_of_boats += 1;
            }
        }
    }

    int k;
    scanf("%d", &k);
    int shot_mat[k][2];

    int result_shot_mat_2[10005] = {0};
    int i_saver_mat[10005] = {0};
    int saver[10005][2];
    for(int i = 1; i < 10005; i++) {
        saver[i][0] = 101;
        saver[i][1] = 101;
    }

    int l = 1;
    int counter = 0;

    for(int i = 1; i <= k; i++) {
        scanf("%d %d", &shot_mat[i][0], &shot_mat[i][1]);
        int checker = 0;

        // Check if the shot has already been made
        for(int j = 1; j < l; j++) {
            if(saver[j][0] == shot_mat[i][0] && saver[j][1] == shot_mat[i][1]) {
                result_shot_mat_2[l] = 1;
                i_saver_mat[l] = i - 1;
                i--;
                l++;
                checker = 1;
                break;
            }
        }

        if(checker == 0) {
            if(shot_mat[i][0] >= m || shot_mat[i][1] >= n) {
                result_shot_mat_2[l] = 2;
                i_saver_mat[l] = i - 1;
                i--;
                l++;
            } else if(faza[shot_mat[i][0]][shot_mat[i][1]] == 1) {
                faza[shot_mat[i][0]][shot_mat[i][1]] = 0;
                result_shot_mat_2[l] = 3;
                saver[l][0] = shot_mat[i][0];
                saver[l][1] = shot_mat[i][1];
                i_saver_mat[l] = i;
                l++;
                counter++;
            } else if(faza[shot_mat[i][0]][shot_mat[i][1]] == 0) {
                result_shot_mat_2[l] = 4;
                saver[l][0] = shot_mat[i][0];
                saver[l][1] = shot_mat[i][1];
                i_saver_mat[l] = i ;
                l++;
            }
        }
        if(counter == number_of_boats){
            printf("You Won!");
            return 0;
        }
    }

    for(int i = 1; i < l; i++) {
        if(result_shot_mat_2[i] == 1) {
            printf("Wrong Place, %d of %d bombs have been used.\n", i_saver_mat[i], k);
        } else if(result_shot_mat_2[i] == 2) {
            printf("Out Of Board, %d of %d bombs have been used.\n", i_saver_mat[i], k);
        } else if(result_shot_mat_2[i] == 3) {
            printf("Hit, %d of %d bombs have been used.\n", i_saver_mat[i], k);
        } else if(result_shot_mat_2[i] == 4) {
            printf("Sea, %d of %d bombs have been used.\n", i_saver_mat[i], k);
        }
    }

    if(counter == number_of_boats){
        printf("You Won!");
    }else{
        printf("You Lost!, %d of %d boats still remaining." , number_of_boats - counter , number_of_boats);
    }
    return 0;
}
