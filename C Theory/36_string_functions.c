#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Parul";
    char s1[56] = "Parul";
    char s2[56] = " bhai";

    // printf("%d", strlen(st));
    char target[30];
    strcpy(target, st); // target now contains "Parul"
    // printf("%s %s", st, target);

    strcat(s1, s2); // s1 now contains "helloparul" <no space in between>
    // printf("%s", s1);

    int a = strcmp("Deep", "joke"); // DJ is negative
    printf("%d", a);

    return 0;
}