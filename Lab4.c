// Name: Philip Holtzman
// Assignment: Lab 4 Limits and Expressions
#include <stdio.h>
#include <limits.h> // ;-)
#include <float.h>

int main() {

    int a =1;
    long int b=1;
    unsigned int c=1;
    float d=1;
    double e=1;
    long double f=1;
    char g='a';


    int num;
    int xtraNum;
    int sum;
    int newNum;
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;

    printf("---------------------------------------------------\n");
    printf("An ints maximum value is %d \n", INT_MAX);
    printf("A long int's maximum value is %ld \n", LONG_MAX);
    printf("An unsigned int maximum value is %hu \n", UINT_MAX);
    printf("A floats max is %f \n", FLT_MAX);
    printf("A doubles max is: %f \n", DBL_MAX);
    printf("A long doubles max is: %Lf \n", LDBL_MAX);
    printf("A char max is: %c \n", SCHAR_MAX);
    printf("---------------------------------------------------\n");

    printf("Hey, enter in 5 numbers: \n");

    scanf("%d", &num);

    xtraNum = num;

    num5 = num % 10;
    num = num / 10;
    num4 = num % 10;
    num = num / 10;
    num3 = num % 10;
    num = num / 10;
    num2 = num % 10;
    num = num / 10;
    num1 = num % 10;

    sum = num1 + num2 + num3 + num4 + num5;

    newNum = sum*xtraNum;

    printf("\n");
    printf("%d * %d = %d \n", xtraNum, sum, newNum);

    return 0;
}