#include <stdio.h>
#include <limits.h>
#include <math.h>

int main() {

    char character ="a"; // getting a 'taking integer from pointer error'
    short int n = SHRT_MAX;
    double posInfinity = +INFINITY;
    char a1, a2, a3, a4;
    int i1, i2, i3;
    float f1, f2;

    printf("with %%c format: %c \n", character); // produces some mystery char
    printf("with %%d format: %d \n", character);
    printf("with %%d format: %d \n", n);
    printf("with %%f format: %f \n", posInfinity);

    printf("Enter char int char float: \n");
    scanf("%c %d %c %f",  &a1,&i1,&a2, &f1 );
    printf("You entered: %c %d %c %f \n", a1,i1,a2,f1);

    printf("Enter char float int char: \n");
    scanf("%c %f %d %c",&a3, &f2, &i2, &a4);  // I cant get this to work
    printf("You entered: %c %f %i %c \n", a3,f2,i2,a4);
    // it doesnt read any of the variables I set with scanf an
    // also I cant figure out how to read a int after a float.. i

    printf("Enter an integer value: ");
    scanf("%d", &i3);

    printf("\n");
    printf("You entered; %015d  \n", i3); // this works if I could figure out the earlier error

    printf("Enter an float value: ");
    scanf("%f", &f2);

    printf("\n");
    printf("You entered; %f  \n", f2);




    return 0;
}