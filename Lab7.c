#include <stdio.h>
#include <string.h>

int main() {

    char string1[100];
    char string2[100];
    char temp;

    int begin, end;

    // input
    printf("Please Enter a String.. \n");
    scanf("%s", &string1);

    strcpy(string2, string1); // copy the string

    // reverse it
    begin = 0;
    end = strlen(string1) - 1; // delete null char
    while(begin < end){ // reverse the string
        temp = string1[begin];
        string1[begin] = string1[end];
        string1[end] = temp;
        begin++;
        end--;
    }

    // output
    printf(" %s%s ",string2,string1);

    return 0;
}
