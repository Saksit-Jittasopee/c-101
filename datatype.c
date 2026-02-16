#include <stdio.h>
#include <stdlib.h>

int main() {
    //Variable ถูก Override ได้ ขึ้นอยู่กับว่าอันไหนใช้ก่อนหลัง
    char name[] = "Saksit"; //char [] เก็บได้หลายตัว
    int age = 19;
    double gpa = 3.42;
    char grade = 'A'; //char เก็บตัวเดียว
    const int NUM = 9; //const เปลี่ยนแปลงไม่ได้
    printf("My name is %s.\n", name); //name แทนที่ %s - string
    printf("I am %d years old.\n", age); //age แทนที่ %d - integer (decimal)
    printf("%p\n", age); //%p = pointer จะแสดงเป็น memory address หรือเลข Hexadecimal
    printf("My grade is %f.\n", gpa); //age แทนที่ %f - floating-point number
    printf("I got grade %c.\n", grade); //grade แทนที่ %c - char
    printf("My favorite %s is %d.\n", "number", 9);
    printf("%f\n", 2 + 3.5); //%f ถ้าจะบวก,ลบ,คูณ,หาร ต้องมี floating-point อย่างน้อย 1 ตัว
    printf("%d\n", 2 + 3.5); //%d มี floating-point ไม่ได้ จะเป็น 0
    printf("%f\n", pow(2,3)); //pow ยกกำลัง 
    printf("%f\n", sqrt(25)); //sqrt square root
    printf("%f\n", ceil(47.267)); //ceiling ปัดขึ้น
    printf("%f\n", floor(59.99)); //floor ปัดลง

    return 0; //ใช้เพื่อระบุว่าโปรแกรมได้ดำเนินการสำเร็จและสิ้นสุดโดยไม่มีข้อผิดพลาดใดๆ (EXIT_SUCCESS)
}