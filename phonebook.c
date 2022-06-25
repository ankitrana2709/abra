#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

    int main(void)
    {
        // . means going inside this variable.
        person people[2];
        people[0].name = "Ankit";
        people[0].number = "+91-9041114199";
        people[1].name = "Navdeep";
        people[1].number = "+91-7696435152";

        for (int i = 0; i < 2; i++)
        {
            if (strcmp(people[iname], "Navdeep") == 0)
            {
                printf("Found %s\n", people[i].number);
                return 0;
            }
        }
        printf("Not found\n");
        return 1;
    }