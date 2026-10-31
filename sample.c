#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
// int x=12;
// int *p=&x;
// int main(void) {
// 	printf("x=%d *p=%d\n", x, *p);
// 	printf("&x=%p p=%p\n", (void *)&x, (void *)p);
// 	return 0;
// }

int a[]= {7, 3, 19,11, 5};
int *ptr=a;

// int main(void) {
//     int max = ptr[0];

// for (int i = 1; i < 5; i++) {
//     if (ptr[i] > max) {
//         max = ptr[i];
//     }
// }
// printf("max=%d\n", max);
// }
int main(void) {
    int *left= a;
    int *right= a+ 4-1;
        while(left<right) {
        int t= *left;
        *left= *right;
        *right= t;
        left++;
        right--;
    }
printf("Reversed array: ");
for (int i = 0; i < 5; i++) {
printf("%d ", a[i]);
}
    return 0;
}
