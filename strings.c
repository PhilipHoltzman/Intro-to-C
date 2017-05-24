// Philip Holtzman
// May 23rd 2017
// Strings.c

#include <stdio.h>
#include <string.h>

int main() {

    char string1[254];
    char string2[254];

    int s1len;
    int s2len;

    char string3[254];

    printf("Enter string 1: \n");
    fgets(string1,254,stdin);

    printf("Enter string 2: \n");
    fgets(string2,254,stdin);

    s1len = strlen(string1);
    s1len--; // delete new line
    printf("The length of string 1 is:  %d \n",s1len);

    s2len = strlen(string2);
    s2len--;
    printf("The length of string 2 is:  %d \n",s2len);

    //strcpy(string3, string1);
    //strcat(string3, string2);


    printf("The first half of string1 and second half of string2 is: \n");

    printf("%s", string3);

    //I really was unable to find out how to do this..
    //  I know how to do it in python cause you can just array[start:end], and I read
    // the book, and watched a dozen vids
    // on string concats and string.h functions but this assignment really killed me.


    return 0;
}