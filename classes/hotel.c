
#include<stdio.h>

int main() {
    unsigned long int state = 0;
    int command;
    int i, j; //arguments of commands, i represents floor and j represents room number

    while(1) {
        scanf("%d", &command);
        if(command == 1) {
            unsigned long int state_copy = state;
            int counter = 0;
            while(counter < 64) {
                printf("%d", state_copy % 2);
                state_copy /= 2;
                if((counter + 1) % 8 == 0)
                    printf("\n");
                counter  ++;
            }
        }
        else if (command == 2) {
            scanf("%d %d", &i, &j);
            i--; j--;
            state = state | (1 << i*8+j);
        }
        else if (command == 3) {
            scanf("%d %d", &i, &j);
            i--; j--;
            state = state & ~(1 << i*8+j);
        }
        else {
            printf("Terminated!");
            break;
        }
    }

    return 0;
}
