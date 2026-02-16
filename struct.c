#include <stdio.h>
#include <stdlib.h>

//struct - เก็บข้อมูล คล้าย Object/Dictionary
struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main() { 

    struct Student student1; //สามารถกำหนดค่าตัวแปร แล้วมาเรียกใช้โดยใช้โครงจากด้านบนได้เลย
    student1.age = 22;
    student1.gpa = 3.50;
    strcpy(student1.name, "John");
    strcpy(student1.major, "CS");

    struct Student student2;
    student2.age = 19;
    student2.gpa = 3.80;
    strcpy(student2.name, "Ariel");
    strcpy(student2.major, "Art");

    printf("%f\n", student1.gpa);
    printf("%s", student2.name);

    return 0;
}