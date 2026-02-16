#include <stdio.h>
#include <stdlib.h>

int max (int num1, int num2){
    int result;
    if (num1 > num2){
        result = num1;
    } else if (num1 = num2) {
        result = 0;
    } else {
        result = num2;
    } 
    return result;

}

int main() {
    printf("Max Number is: %d\n", max(4, 4));
    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    switch (grade){
    case 'A':
        printf("You're A Prodigy");
        break;
    case 'B':
        printf("You're Good");
        break;
    case 'C':
        printf("You're OK");
        break;
    case 'D':
        printf("You're Not OK");
        break;
    case 'F':
        printf("You're Fired!");
        break;
    default:
        printf("Who Are You? **visible confused**");
    }

    return 0;
    
}