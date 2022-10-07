#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b);
int main(void)
{
    int x = 2;
    int y = 3;

    printf("x is %i, y is %i\n", x,y);
    swap(&x,&y);
    printf("x is %i, y is %i\n", x, y);

}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    //to swap things we use pointers always.
}