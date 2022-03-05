#include<stdio.h>

void input(float *base, float *height)
{
  printf("Enter the base of the triangle: ");
  scanf("%f", base);
  printf("Enter the height of the triangle: ");
  scanf("%f", height);
}
void area_triangle(float base, float height, float *area)
{
  *area = 0.5*base*height;
}
void output(float base, float height, float area)
{
  printf("The area of triangle %0.5f base , %0.5f height is area = %0.5f", base, height, area);
}
int main()
{
  float base, height, area;
  input(&base, &height);
  area_triangle(base, height, &area);
  output(base, height, area);
  return 0;
}