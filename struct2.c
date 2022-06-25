#include <stdio.h>
#include <cs50.h>

typedef struct
{
    string names;
    string numbers;
}
person;
int main(void)
{
    person people[2];
    people[0].names = "Ankit";
    people[0].numbers = "904";
    people[1].names = "nav";
    people[1].numbers = "7696";
    for(int i = 0; i < 2; i++ )
    {
        printf("%s: %s\n", people[i].names, people[i].numbers);
    }
}