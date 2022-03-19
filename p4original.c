#include<stdio.h>

int input()
{
  int n;
  printf("Enter value:");
  scanf("%d",&n);
  return n;
}

void input_array(int n, int a[n])
{
   int i;
  printf("Enter the elements of the array:\n");
  for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
  }
}

int composite(int n )
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
  
int sum_composite_numbers(int n, int a[n])
{
  int sum=0;
  for(int i=1;i<=n;i++)
  {
    if(composite (a[i])==1)
    {
     sum=sum+a[i];
    }
  }
  return sum;
}

void output(int sum)
{
  printf("The sum is %d",sum);
}

int main()
{
  int n;
  n=input();
  int a[n];
  input_array(n,a);
  int x;
  x=sum_composite_numbers(n,a);
  output(x);
  return 0;
  }