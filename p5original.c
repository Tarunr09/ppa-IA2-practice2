#include <stdio.h>

int input()
{
  int n;
  printf("Enter a number:\n");
  scanf("%d", &n);
  return n;
}

int gcd(int a, int b)
{
    int count =1;
 while(count <= a && count <= b)  
  {  
   if(a % count == 0 && b % count == 0){  
     gcd=count;  
   }  
    count++;  
  }  
}

void output(int a, int b, int gcd)
{
  printf("HCF of %d and %d is %d\n", a, b, gcd);
}

int main()
{
  int n,a,b;
  a=input();
  b=input();
  int res=gcd(a,b);
  output(a,b,res);
  return 0;
}