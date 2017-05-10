// Philip Holtzman
// Tues May 9th 2017
// Lab 5 Selection and Loops

#include <stdio.h>

// for good practice
#define N 4
#define S 100

int main() {

    // program one variables
    int largest;
    int smallest;

    int a[N];
    int  i, j;
    int swap;

    // program two variables

    int b[S];
    int t;
    float count = 0;
    float mean = 0;
    int sum = 0;

    //--------------------- Program 1 ----------------------------------

    // enter elements
    printf("Enter elements in 4 digit array: ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }

    // sorting code
    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if(a[j] < a[i])
            {
                swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    // largest and smallest sum calc
    largest = a[2] + a[3];
    smallest = a[0] + a[1];


    // Prints the sorted array
    printf("\n");
    printf("Elements of array in sorted ascending order: \n\n");
    for(i=0; i<N; i++)
    {
        printf("%d\n", a[i]);
    }

    // print output
    printf("\n");
    printf("The sum of the smallest numbers (%d and %d) is %d \n", a[0], a[1], smallest);
    printf("The sum of the largest numbers (%d and %d) is %d \n", a[2], a[3], largest);
    printf("\n");
    // ------------------------------ Program 2 ------------------------------

    // enter elements
    for(t=0; t<S; t++)
    {

        printf("\n");
        printf("Enter positive integers: ");
        scanf("%d", &b[t]);
        if (b[t] > 0) {

            count++;
            printf("\n");
            printf("You entered: %d\n", b[t]);
            printf("total elements %.1f\n", count);

        } else {
            printf("\n");
            printf("total elements entered: %f \n", count);

            for (t=0; t < count; t++)
                sum = sum + b[t];

            printf("\n");
            printf("sum = %d \n", sum);
            mean = sum / count;
            printf("mean = %.2f \n", mean);
            break;
        }

    }

    return 0;
}