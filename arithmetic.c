// Program: Arithmetic Expressions
// Author: Philip Holtzman

#include <stdio.h>
#include <math.h>

int main() {

    // exercise variables
    #define M_PI 3.14159265358979323846

    unsigned short int valueInput;
    unsigned short int raisedPower;

    unsigned short int radiusOfCircle;

    double circOfCirc = 0;
    double areaOfCirc = 0;

    float polyNom;
    float finalNom;

    int value1;
    int value2;
    int value3;

    printf("Program: Arithmetic Expressions\n");
    printf("Author: Philip Holtzman\n\n");

    printf("Please enter an unsigned short integer.. \n");

    scanf("%hu", &valueInput);

    printf("Here she is %hu \n", valueInput);

    raisedPower = pow(2,valueInput);

    printf("%hu is 2 raised to the power of %hu \n", raisedPower, valueInput);

    printf("Please enter the radius of the circle \n");

    scanf("%hu", &radiusOfCircle);

    circOfCirc = 2 * M_PI * radiusOfCircle;

    areaOfCirc = M_PI * pow(radiusOfCircle,2);

    printf("%f is the circumference and %f is the area of the circle \n", circOfCirc,areaOfCirc );

    printf("Please enter a float.. \n");

    scanf("%f", &polyNom);

    finalNom = 2*pow(polyNom,3) + 3*pow(polyNom,2) + 4*polyNom + 5;

    printf(" 2x3 + 3x2 + 4x + 5 where x is %f = %f \n",polyNom, finalNom);

    printf("Please enter two integers... \n");

    scanf("%d",&value1);
    scanf("%d",&value2);

    value3 = value1 % value2;

    printf("The remainder of %d / %d is %d \n"  , value1,value2, value3);

    return 0;
}