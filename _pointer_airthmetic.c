#include<stdio.h>
int main(void) {
    int a[4]= {1, 2, 3, 4};
    double d[3]= {1.1, 2.2, 3.3};
    int *ip= a;
    double *dp= d;
    
    printf("int: p+1 =%ld bytes ahead\n", (long)((char *)(ip+1) - (char *)ip));
    printf("double: p+1 =%ld bytes ahead\n", (long)((char *)(dp+1) - (char *)dp));
    printf("*(ip+3)= %d\n", *(ip + 3));
    int *end= a+ 3;
    printf("end - ip= %ld elements\n", (long)(end - ip));
    return 0;
}