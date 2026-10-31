#include<stdio.h>
int main(void) {
    int marks[3]= {70, 85, 92};
    int *p= &marks[0];
    for (int i=0; i<3; i++) {
        printf("marks[%d]=%d *(p+%d)=%d\n", i, marks[i], i, *(p+i));
    }
    return 0;
}