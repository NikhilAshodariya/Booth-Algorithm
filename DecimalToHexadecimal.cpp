#include<stdio.h>
#include<conio.h>
typedef struct stack
{
 int topa,topf;
 int a[100];
 int f[100];
}c;
c s;
void pusha(int b)
{
 s.a[++(s.topa)]=b;
}
void pushf(int b)
{
 s.f[++(s.topf)]=b;
}
int main()
{
 s.topa=-1;
 s.topf=-1;
 float f;
 int n,z;
 printf("\n\tEnter a Decimal number (floating allowed)   ");
 scanf("%f",&f);
 n=(int)f;
 f=f-n;
 int rem,i;
 for(int i=n;i;i=i/16)
 {
  rem=i%16;
  pusha(rem);
 }
 for(i=0;i<=4;i++)
 {
        f=f*16;
        z=(int)f;
        pushf(z);
        f=f-z;
 }
 printf("Hexa= ");
 for(i=s.topa;i>=0;i--)
 {
  rem=s.a[i];
  printf("%X",s.a[i]);
 }
 printf(".");
 for(i=0;i<=s.topf;i++)
 {
  printf("%X",s.f[i]);
 }
 return 0;
}