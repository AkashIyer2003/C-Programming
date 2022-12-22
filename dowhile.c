#include<stdio.h>
int main()
{
int a,b;
a = 0;
b = 1;
do
{
printf("%d",a);
a = a + b;
printf("%d",b);
b = b + a;
}while(b < 300);
return 0;
}
