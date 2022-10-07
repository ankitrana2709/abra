#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int age = 30;
  int *pAge = &age;
  printf("%d\n",*&*&age);
}