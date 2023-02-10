#include <stdio.h>
#include <stdlib.h>


typedef struct student {
    char * name;
    int number;
} student_t;



int main(){
    student_t std1;
    std1.name = "hasan";
    std1.number = 5;

    student_t std2;
    std2.name = "jafar";
    std2.number = 10;

    student_t students[] = {std1, std2};
    printf("number is: %d, name is: %s\n", students[1].number, students[1].name);

    return 0;
}