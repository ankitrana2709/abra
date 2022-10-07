#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = get_int("value of i: \n");
    printf("%i", i > 10 ? 10 : i);
}