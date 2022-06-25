#include <stdio.h>
#include <stdlib.h>
int main()
{
    int No[10];
    int n;
    float sum;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    for(int i = 0;i < n ; i++)
    {
        printf("Type integer: ");
        scanf("%d",&No[i]);
         sum = No[i] + sum;
    }
      printf("average is %f \n",sum / n);
    return 0;
}
