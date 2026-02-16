#include <stdio.h>
#include <stdlib.h>

double cube(double num){
    double result = num*num*num;
    return result;
}

void sayHi(char name[], int age){
    printf("Hello %s You are %d years old\n", name, age);
}

int main() {
    double no;
    sayHi("Mike", 65);
    sayHi("Hank", 50);
    printf("Enter Your Number: ");
    scanf("%lf", &no);
    printf("Answer: %f", cube(no));
    return 0;
}