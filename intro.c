// Basic structure of a C program
// - it is how you write comment in c language

/* multi line comments 
#include<stdio.h> // its the header file which contains the standard input and output functions

int main(){
    printf("Hello World\n");
    int age;
    age = 18;
    printf("age is: %d", age);
    return 0;
}
// \n is used to print in a new line. it is an escape sequence.

// \t is used to print a tab space horizontally.

// \\ is used to print a backslash character.

// Declaring variables in C language

// type variable_name = value;
// int age = 18;
// or
//int age;
//age = 18;
//printf("age is %d: ", age); // %d is a format specifier used to print integer values

int myNum = 15;

int myOtherNum = 23;

// Assign the value of myOtherNum (23) to myNum
myNum = myOtherNum;

// myNum is now 23 (was 15)
printf("%d", myNum);
// Output: 23

int x = 5, y = 6, z = 50;
printf("%d", x + y + z);

// all c variables must be identified with unique names. these unique names are callled identifiers.

// %f is for float values, %c is for character values, %s is for string values, and %lf is for double values.
*/
// calculating the area of a rectangle
#include<stdio.h>
int main() {
int length = 10;
int width = 5;
int area = length * width;
printf("Area of rectangle is: %d", area);
} 

// unsigned int is a data type that can only hold non-negative integer values (0 and positive integers). It cannot hold negative values. The range of unsigned int is from 0 to 4,294,967,295 (on a system with 32-bit unsigned int).
// signed int is a data type that can hold both negative and positive integer values. The range of signed int is from -2,147,483,648 to 2,147,483,647 (on a system with 32-bit signed int).
// %zu is a format specifier used to print the size of an object in bytes. It is used with the sizeof operator to determine the size of a data type or variable. 
// For example, printf("Size of int: %zu bytes\n", sizeof(int)); will print the size of an int in bytes.

/*
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of double: %zu bytes\n", sizeof(double));
printf("Size of short int: %zu bytes\n", sizeof(short int));
printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of long long int: %zu bytes\n", sizeof(long long int));
printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
printf("Size of long double: %zu bytes\n", sizeof(long double));
*/

// Overflow behavior!!
#include <stdio.h>
#include <limits.h>
int main(void) {
    unsigned char level = 250;
    for (int i = 0; i < 8; i++) {
        level++;
    printf("level: %u\n", level);
    printf("max value of unsigned char: %u\n", UCHAR_MAX);
    return 0;

    }
}
// it will print 2 as the answer because the maximum value of an unsigned char is 255. When we increment the value of level from 250 to 255, it reaches its maximum value. 
// When we increment it again, it wraps around to 0, and then continues to increment until it reaches 2 after 8 increments.

typedef struct {
    int rollno;
    char name[50];
    int age;
} Student;

int main() {
    Student s1;
    s1.rollno = 101;
    struct(s1.name, "John Doe");
    s1.age = 20;

    printf("Roll No: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);

    return 0;
}