#include<stdio.h>
int main(void) {
    int i= 1;
    char c= 'A';
    double d= 2.5;
    int *ip= &i; 
    char *cp= &c;
    double *dp= &d;
    printf("size of int=%zu size of int pointer=%zu\n", sizeof(i), sizeof(ip));
    printf("size of char=%zu size of char pointer=%zu\n", sizeof(c),
    sizeof(cp));
    printf("size of double=%zu size of double pointer=%zu\n", sizeof(d),
    sizeof(dp));
    return 0;
}
