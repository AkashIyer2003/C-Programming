#include<stdio.h>
#include<string.h>
int main()
{
char arr[100] = "123hello!!()";
for(int i = 0; i < strlen(arr); i++)
{
  int a;
  a = arr[i];
      if(a<48 && a>57 && a<65 && a>91 && a<97 && a<123)
      {
          printf("*");
      }
      else
      {
          printf("%c",(arr[i] + 1));
      }
}
return 0;
}
