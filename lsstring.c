#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name[] = {"Ankit", "Tere", "Mere" , "Hamare" , "Apke" , "Kuki" ,"Isliye"};
    for (int i = 0; i < 7; i++)
    {
        if(strcmp(name[i], "Tere") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
