#include<stdio.h>
 int input()
 {
   int x;
   printf("Enter value:");
   scanf("%d",&x);
   return x;
 }
 int check_scalene(int a, int b, int c)
 {
   if(a!=b && b!=c && c!=a)
   return 0;
   else
   return 1;

 }
 void output( int x)
 {
   if
   printf("The triangle is scalene %d\n",x);
 }
 int main()
 {
   int a,b,c,x;
  a=input();
  b=input();
  c=input();
  x=check_scalene(a,b,c);
  output(x);
  return 0;
 }