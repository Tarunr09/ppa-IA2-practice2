#include<stdio.h>
#include<string.h>

void input(char *a)
{
  printf("Enter the string:");
  scanf("%s",a);
}

int str_reverse(char *a,char *b)
{
  int n,j;
  n=strlen(a);
  j=n-1;
  for(int i=0;i<n;i++)
  {
    b[j]=a[i];
      j--;
  }
}

void output(char *a,char *reverse)
{
  printf("The reverse of the string %s is %s",a,reverse);
}

int main()
{
  char a[100],reverse[100];
  input(a);
  str_reverse(a,reverse);
  output(a,reverse);
  return 0;
}