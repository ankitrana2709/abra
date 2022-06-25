#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{//they are different because these represen an address not a value.
    // string returns a pointer of first character in it.
    string s = get_string("s: ");
    string t = get_string("t: ");

    if(strcmp(s,t)==0)
    {
        printf("same\n");
    }
    else
    printf("different\n");
}