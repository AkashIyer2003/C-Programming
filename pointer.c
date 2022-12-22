#include<stdio.h>
int main()
{
int a=10;
int *p;
p = &a;
printf("%p",p);
p++;
printf("%p",p);
return 0;
}
