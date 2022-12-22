#include<stdio.h>
int main()
{
char dna[100];
int Dna[100];
printf("Enter your dna sequence ");
scanf("%s",dna);
for(int i =0;i<100;i++)
{
if(dna[i]==dna[i+1])
{
Dna[i] = Dna[i] + 1;
for(int j=(i+1);j<100;j++)
{
dna[j] = dna[j+1];
}
}
else if(dna[i] != dna[i+1])
{
Dna[i] = 1;
}
}
for(int i=0; i<100; i++){
printf("%d",Dna[i]);
}
return 0;
}
