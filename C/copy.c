#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: ");
    //malloc gives emory to copy
    char *t = malloc(strlen(s)+1);
/* manual copying
for(int i = 0 , n = strlen(s)+1; i < n ; i++)
{
    t[i] = s[i];
} */
// strcpy copies string.
    strcpy(t,s);
    if(strlen(t) > 0)
    {
    t[0] = toupper(t[0]);
    }
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t)
    return 0;
}
/* both gets capitalized. because when we copy a string we only copied a pointer.
two different pointers leading to the same bytes.
to make genuine copy we used strcpy and allocated memory.*/