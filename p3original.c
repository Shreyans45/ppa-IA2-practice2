#include<stdio.h>
int input_number()
{
  int n;
  printf("Enter the value \n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i;
  for(i=2;i<n;++i) 
  {
    if(n%i==0)
  {
    return 0;
  }
  }
  return 1;
}
void output(int n,int composite)
{
  if(composite)
  printf("NOT COMPOSITE");
  else
  printf("COMPOSITE");
}
int main()
{
  int n,x;
  n=input_number();
  x=is_composite(n);
  output(n,x);
  return 0;
}