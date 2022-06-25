#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Stdt
{
    char name[40];
    char major[40];
    int age;
    double gpa;
};
int main()
{
 struct Stdt Stdt1;
 Stdt1.gpa = 3.3;
Stdt1.age = 22;
strcpy(Stdt1.name, "Ankit");
strcpy(Stdt1.major, "Maths");

struct Stdt Stdt2;
 Stdt2.gpa = 3.1;
Stdt2.age = 21;
strcpy(Stdt2.name, "Ant");
strcpy(Stdt2.major, "Mass");

struct Stdt Stdt3;
 Stdt3.gpa = 3.4;
Stdt3.age = 23;
strcpy(Stdt3.name, "At");
strcpy(Stdt3.major, "aths");
 printf("%s\n", Stdt2.name);
 return 0;
}
