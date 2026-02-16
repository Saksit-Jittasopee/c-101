#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;

    // while(i <= 2){
    //     printf("SUGAHHHH\n");
    //     i++;
    // }

    // do {
    //     printf("SUGAHHHH\n");
    //     i++;
    // } while(i <= 2);

    int luckyNumbers[6] = {1, 3, 5, 7, 8, 9};
    for(i = 0; i < 6; i++){ //initialization; condition; increment - ตัวเริ่มต้น เงื่อนไข การเพิ่มหรือลดจำนวน
        printf("%d\n", luckyNumbers[i]);
    }

    return 0;
}