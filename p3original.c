#include<stdio.h>
int input()
{
  int n;
  printf("Enter value:");
  scanf("%d",&n);
  return n;
  }

int composite(int n)
{
  int a=0;
  for (int i=2;i<=n/2;i++)
  {
   if(n%i==0){
    a=1;
    break;
   }
  }
 return a;
}

void output(int a)
{
   if(a==1)
   {
   printf("It is a composite number \n");
   }
  else
  {
   printf("It is not a composite number  \n");
  }
}

int main()
{
  int n,x;
  n=input();
  x=composite(n);
  output(x);
  return 0;
}