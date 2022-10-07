#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    FILE *fpointer =fopen("employee.html","w");
        fprintf(fpointer, " Ankit");
    fclose(fpointer);
    return 0;
}
