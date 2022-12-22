
#include<stdio.h>
#include<time.h>
int main()
{
int a, b;
time_t start = time(NULL);
printf("enter a number\n");
scanf("%d",&a);
b = 20 * a;
printf("%d is 20 times more than %d\n",b,a);
time_t end = time(NULL);
printf("the time taken by the program is %7.5ld",(end - start));
return 0;
}
