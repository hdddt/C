#include <stdio.h>
int rnd(double x)
{
  double y;
  int z;
  y = x+0.5;
  z = (int)y;
  return y;
}

int main(void)
{
  double a;
  int b;
  scanf("%lf",&a);
  b=rnd(a);
  printf("%d\n",b);
  return 0;
}
