#include <stdio.h>
#include <cs50.h>

int main()
{
    int num[3][2] = {{1,2} , {2,3} , {3,4}};
    for (int i = 0 ; i < 3 ;i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%p", &num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
