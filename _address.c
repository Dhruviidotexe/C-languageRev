#include<stdio.h>

int main(void) {
    int age= 20;
    int *ptr = &age;
    int *ptr = NULL;
    printf("age=%d *ptr=%d\n", age, *ptr);
    return 0;

}