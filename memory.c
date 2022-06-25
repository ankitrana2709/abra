#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   //malloc gives us address of first empty byte called.
   //and we assign a pointer to store that address.
    int *x = malloc(3 * sizeof(int));
    x[0] = 40;
    x[1] = 72;
    x[2] = 30;
    // x[3] buffer overflow i touched memory which i shouldnot.
    free(x);
}