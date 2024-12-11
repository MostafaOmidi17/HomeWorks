//403110393 mostafa omidi
#include <stdio.h>

//a function that give us the string of our string length.
int string_length(char str[]){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    return length;
}

//checking uppercase.
int uppercase(char str[]){
    for(int i = 0 ; str[i] != '\0' ; i++){
        if((str[i] >= 'A') && (str[i] <= 'Z')){
            return 1;
        }
    }
    return 0;
}

//checking digit.
int digit(char str[]){
    for(int i = 0 ; str[i] != '\0' ; i++){
        if((str[i] >= '0') && (str[i] <= '9')){
            return 1;
        }
    }
    return 0;
}


//checking vowel.
int vowel(char str[]){
    for(int i = 0 ; str[i] != '\0' ; i++){
        if((str[i] == 'A') || (str[i] == 'a') || (str[i] == 'E') || (str[i] == 'e') || (str[i] == 'I') || (str[i] == 'i') || (str[i] == 'O') || (str[i] == 'o') || (str[i] == 'U') || (str[i] == 'u')){
            return 1;
        }
    }
    return 0;
}

//checking length.
int length(char str[]){
    int length = string_length(str);
    if(length >= 10){
        return 1;
    }
    return 0;
}

//checking punctuation.
int punctuation(char str[]){
    for(int i = 0 ; str[i] != '\0' ; i++){
        int ascii_value = str[i];
        if(((ascii_value > 31) && (ascii_value < 48)) || ((ascii_value > 57) && (ascii_value < 65)) || ((ascii_value > 90) && (ascii_value < 97)) || ((ascii_value > 122) && (ascii_value < 127))){
            return 1;
        }
    }
    return 0;
}

//checking the sum of numbers.
int numcheck(char str[]){
    int posneg = 1;
    int sum = 0;
    int actsum = 0;
    int len = string_length(str);

    for(int i = 0 ; i < len + 1 ; i++){
        if(str[i]>='0' && str[i] <= '9'){
            if(i!=0 && str[i-1] == '-'){
                posneg = -1;
            }
            sum = sum * 10 + posneg * (str[i] - '0');
        }else{
            actsum += sum;
            sum = 0;
            posneg = 1;
        }
    }
    if(actsum == 10){
        return 1;
    }
    return 0;
}

//checking permutations.
int permutation(const char str[]) {
    int len = string_length(str);

    char characters[] = {'h', 'o', 'm', 'e', 'l', 'a', 'n', 'd', 'r', 's', 't', 'i', 'g'};
    int max_counts[] = {2, 1, 1, 2, 2, 3, 2, 2, 2, 1, 2, 1, 1};
    int num_limits = sizeof(characters) / sizeof(characters[0]);

    for (int i = 0; i <= len - 22; i++) {
        int counts[13] = {0};
        int checker = 0;

        for (int j = 0; j < 22; j++) {
            for (int k = 0; k < num_limits; k++) {
                if (str[i + j] == characters[k]) {
                    if (counts[k] < max_counts[k]) {
                        counts[k]++;
                        checker++;
                    } else {
                        checker = 0;
                        break;
                    }
                }
            }
            if (checker != j + 1) {
                break;
            }
        }
        if (checker == 22) {
            return 1;
        }
    }
    return 0;
}



int main(){
    char a[5005];
    scanf("%s" , a);
    int points = uppercase(a) + digit(a) + vowel(a) + punctuation(a) + permutation(a) + length(a) + numcheck(a);
    printf("%d" , points);
    return 0;
}