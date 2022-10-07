#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = "HELLO";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    printf("%p\n", &s[4]);
    printf("%p\n", &s[5]);
    printf("%p\n", &s[6]);
}
/*
int main(void)
{
    char *s = "HELLO";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    printf("%p\n", &s[4]);
    printf("%p\n", &s[5]);
    printf("%p\n", &s[6]);
}
*/