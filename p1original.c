#include<stdio.h>
void input(float *base, float *height)
{
  printf("Enter value of base:");
  scanf("%f",base);
  printf("Enter value of height:");
  scanf("%f",height);
}

void find_area(float base , float height, float *area)
{
  *area=base*height/2;
}

void output(float area)
{
  printf("The area of triangle is %f :",area);
}

float main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(area);
  return 0;
}