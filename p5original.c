#include<stdio.h>
int input()
{
  int n;
  printf("Enter a number :\n");
  scanf("%d",&n);
  return n;
}

int gcd(int a, int b)
{
  int gcd;
  for (int i=1;i<=a && i<=b; i++)
    {
      if(a%i==0 && b%i==0)
      gcd=i;
    }
    return gcd;
}
void output(int a,int b,int gcd)
{
  printf("GCD for given two numbers is %d and %d is %d",a,b,gcd);
}

int main()
{
  int x,y,g;
  x=input();
  y=input();
  g=gcd(x,y);
  output(x,y,g);
  return 0;
}



/*#include<stdio.h>
int input(){
    int n;
    printf("Enter number to find gcd \n");
    scanf("%d",&n);
    return n;
}
int gcd(int a, int b){
    int hcf;
    if (a>b){
        hcf=b;
    }
    else{
        hcf=a;
    }
    for(hcf;hcf>=1;hcf--){
        if(a%hcf==0 && b%hcf==0){
            break;
        }
    }
    return hcf;
}
void output(int a,int b, int hcf){
    printf("The hcf of %d and %d is %d",a,b,hcf);
}
int main(){
    int a,b,hcf;
    a=input();
    b=input();
    hcf=gcd(a,b);
    output(a,b,hcf);
    return 0;
}
*/
