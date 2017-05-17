// Philip Holtzman
// May 14th 2017
// Array Assignment

#include <stdio.h>

// Its not beautiful but its works!

int main()
{
    // user input
    char bigString[100];

    int i = 0;
    int j = 0;
    // count to map ! to z on ascii chart.. I coulda made it include even weirder and european chars..
    int count[90] = {0};

    // my variables for my bizarre whitespace calculations
    float total=0;
    int totalInt;
    int whitespace=0;

    printf("Enter string.. \n");

    // input limited by 100
    fgets(bigString,100,stdin);


    for(j=0; j<100; j++){
        if(bigString[j] == ' ')
                whitespace++;
    }

    while (bigString[i] != '\0')
    {

        if (bigString[i] >= '!' && bigString[i] <= 'z')
            count[bigString[i]-'!']++;
        i++;
        total++;
        if(bigString[j] == ' ')
            whitespace++;

    }

    // more bizarre whitespace and N-1 calcs and a little bit of casting
    whitespace--;
    total--;
    total = total - whitespace;
    totalInt = (int)total;

    // header
    printf("---------------------\n");
    printf("   Frequency Table\n");
    printf("---------------------\n");
    printf("Char  Count   relFreq\n");
    printf("---------------------\n");
    printf("ALL     %d       1   \n", totalInt);


    // output
    for (i = 0; i < 90;i++)
    {
        if (count[i] != 0)
            printf("'%c'     %d       %.3f \n", i+'!', count[i], count[i] / total);
    }


    return 0;
}
