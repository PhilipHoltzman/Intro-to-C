// Philip Holtzman
// April 12th 2017
// Lab 2

// Problem 1:
// my analysis:

#include <stdio.h> // this directive includes the header file stdio.h, part of teh c standard library

int main(void) // main function
{
    printf("Parkinson's Law: \nWork expands so as to "); // various printf statements
    printf("fill in the time\n");
    printf("available for its completion. \n");

    printf("\n");

    printf("         *    \n");
    printf("        *     \n");
    printf("       *      \n");
    printf("  *   *      \n");
    printf("   * *      \n");
    printf("    *      \n");


    getchar(); // I had to use this instead of getch() or it wont compile...
    return 0; // return zero, indicating no problems and normal execution..

/* Problem 2:
// the output:
// Parkinson's Law:
// Work expands so as to fill in the time
// available for its completion.

// ascii art

// Process finished with exit code 0 */


}