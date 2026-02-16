#include <stdio.h>
#include <stdlib.h>

int main() {

    int nums[3][2] = {
                {1, 2}, //0
                {3, 4}, //1
                {5, 6} //2
                };
    // printf("%d\n", nums[2][0]);

    int i, j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 2; j++){
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}