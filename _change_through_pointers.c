#include<stdio.h>
int main(void) {
    int age= 20;
    int *p = &age;
    *p= 21;
    printf("p holds the address of age: %p\n", (void *)p);
    age= 35;
    printf("age=%d *p=%d\n", age, *p);
    return 0;

}