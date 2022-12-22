#include<stdio.h>
#include<stdlib.h>
int main()
{
int a = 2,b = 0;
srand(a);
for(int i = 0; i<20; i++)
{
b = rand();
printf("%d\n",b);
}
return 0;
}
