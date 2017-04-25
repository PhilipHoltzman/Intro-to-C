#include <stdio.h>

int main() {

    float f = 4.2f;
    char c = "A";
    int value = 8000;
    char c2 = "B";
    int num1, num2, num3;

    printf("--------------\n");
    printf("  Exercise 1 \n");
    printf("--------------\n");
    printf("\n");

    printf("---------------------------------------------------------\n");
    printf(" Float = %f, Char 1 = %c, Int = %d, Char 2 = %c \n", f, c, value, c2);
    printf("---------------------------------------------------------\n");

    printf("--------------\n");
    printf("  Exercise 2 \n");
    printf("--------------\n");
    printf("\n");

    printf("--------------------------\n");
    printf("Hey, whats your number ?\n");
    printf("---------------------------\n");
    printf("....... ");

    scanf("%3d",&num1);
    scanf("%3d",&num2);
    scanf("%d",&num3);
    printf("\n");

    printf("----------------\n");
    printf("(%d) %d - %d\n", num1, num2, num3);
    printf("----------------\n");

    return 0;
}