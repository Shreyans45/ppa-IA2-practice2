#include<stdio.h>

int input_side()
{
  int n;
  printf("Enter the side of the triangle: ");
  scanf("%d", &n);
  return n;
}
int check_scalene(int a, int b, int c)
{
  if(a!=b && b!=c && a!=c) 
  return 0;
  else 
  return 1;
}
void output(int a,int b,int c/*,int scalene*/)
{
  int scalene;
  if (scalene == 0)
  printf("The given triangle is not scalene ");
  else 
  printf("The given triangle is  scalene ");
}
int main()
{
  int a, b, c;//declare a variable
  a = input_side();
  b = input_side();
  c = input_side();
  check_scalene(a,b,c);//assign a variable here
  output(a,b,c);
  return 0;
}
