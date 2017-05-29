// Philip Holtzman
// May 29th 2017
// Lab 8, Factorial Func

#include <stdio.h>

int fact(int n)
{
    int i;
    int product;

    product = 1;
    for(i=1; i<=n; ++i)
    {
        product = product * i;
    }
    return product;
}

int main() {
    int target;

    scanf("%d", &target);
    target = fact(target);
    printf("%d \n", target);

    return 0;
}

