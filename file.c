#include <stdio.h>
#include <stdlib.h>

int main() {

    char line[255];
    // FILE * fpointer = fopen("exployees.txt", "w"); //write a new file ถ้าไม่ระบุ path มันจะสร้างใน path นี้
    // FILE * fpointer = fopen("exployees.txt", "a"); //append เพิ่มเนื้อหาจากไฟล์เดิม
    FILE * fpointer = fopen("exployees.txt", "r"); //read อ่านไฟล์
    
    fgets(line, 255, fpointer); //อ่าน line แรกจากไฟล์
    printf("%s", line);

    // fprintf(fpointer, "\nYounggu, Rapper"); //เพิ่มเนื้อหา

    fclose(fpointer); //close file
    return 0;
}