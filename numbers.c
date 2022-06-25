//Linear search
#include <stdio.h>
#include <cs50.h>

int main()
{
    int Num[] = {1, 4, 5, 0, 9, 3, 2};
    for(int i = 0; i < 7; i++)
    {
        if(Num[i] == 5)
        {
        printf("found\n");
        return 0;
        }
    }
    printf("not found\n");
    return 1;
}