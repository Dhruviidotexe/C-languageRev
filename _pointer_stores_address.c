#include<stdio.h>
int main(void) {
    int age= 20;
    int *p= &age;
    printf("p holds the address of age: %p\n", (void *)p);
}