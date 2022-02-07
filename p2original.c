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
   int isscalene;
    if(a==b || b==c || c==a)
    {
    return -1;
    }
    else
    {
    return 1;
    }
   return isscalene;

 }
 void output(char a, char b, char c, int isscalene)
 {
   if(isscalene==1)
   printf("The triangle is scalene \n");
   else if(isscalene==-1)
   printf("The triangle is not scalene \n");

 }
 int main()
 {
  int a,b,c,x;
  a=input();
  b=input();
  c=input();
  x=check_scalene(a,b,c);
  output(a,b,c,x);
  return 0;
 } 