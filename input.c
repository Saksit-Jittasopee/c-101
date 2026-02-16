#include <stdio.h>
#include <stdlib.h>

int main() {

    int age;
    double gpa;
    // char blood;
    char name[20]; //เก็บได้ 20 ตัว
    printf("Enter your age: ");
    scanf("%d", &age); //& = pointer
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    // printf("Enter your blood type: ");
    // scanf("%c", &blood);
    printf("Enter your name: ");
    fgets(name, 20, stdin); //fgets สามารถใส่นามสกุลได้ แต่ scanf จะขึ้นแค่ชื่อจริง - stdin = standard input
    printf("\nYou are %d years old\n", age);
    printf("Your grade is %f\n", gpa);
    // printf("Your blood group is %c\n", blood);
    printf("My name is %s \n", name);

    return 0;
}