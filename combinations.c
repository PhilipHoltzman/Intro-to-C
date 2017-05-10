// Philip Holtzman
// May 9th 2017
// Selection2 Conditions and Loops


#include <stdio.h>

int main() {

    // while loop variables
    int n;
    int k;
    int true = 1;
    int false = 0;
    int sum;

    // factorial variables
    int c;
    int fact1 = 1;

    int d;
    int fact2 = 1;

    int e;
    int fact3 = 1;

    int combination;

    // grabbing N
    while (true == 1){

        printf("Enter N (1-10).. ");
        scanf("%d", &n);

        if(n >= 1 && n <= 10){
            true = 0;

        }

        else{
            printf("enter a number between 1 and 10..\n");
        }

    }

    // grabbing K
    while (false == 0){

        printf("Enter K (1-N).. ");
        scanf("%d", &k);

        if(k >= 1 && k <= n){
            false = 1;
        }

        else{
            printf("enter a number between 1 and N..\n");
        }

    }


    // printing vars
    printf("\n");
    printf("\n");
    printf("N = %d", n);
    printf("\n");
    printf("K = %d", k);
    printf("\n");
    printf("\n");

    sum = n - k;


    printf("n - k (%d - %d) = %d", n, k, sum);
    printf("\n");

    // doing the factorials

    for (c = 1; c <= n; c++)
        fact1 = fact1 * c;

    for (d = 1; d <= k; d++)
        fact2 = fact2 * d;

    for (e = 1; e <= sum; e++)
        fact3 = fact3 * e;

    printf("\n");
    printf("Factorial of N(%d) = %d\n", n, fact1);

    printf("\n");
    printf("Factorial of K(%d) = %d\n", k, fact2);

    printf("\n");
    printf("Factorial of N - K = %d\n", fact3);
    printf("\n");

    // combo equation then final print out
    combination = n / (fact2 * fact3);

    printf(" N(%d) / (factorial of k(%d) * factorial of n - k(%d)) = %d ", n, fact2, fact3, combination);
    printf("\n");



    return 0;
}