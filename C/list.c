#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //dynamically allocating array of size 3
    //creating space on heap not on stack
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }
    //assign 3 numbers to array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Allocate new arrat of size 4
    //realloc can perform this functionupdate space dynamically
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }
    //copy numbers from old array to new array.
        for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    //add 4th no. to array
    tmp[3] = 4;

    //Remember new array
    list = tmp;
    //print new array
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n",list[i]);
    }
    free(list);
    return 0;
    }