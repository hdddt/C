#include <stdio.h>

int main(void)
{
  int i;
  double a,max,min;
  scanf("%lf", &a);
  max = a;
  min = a;

  for (i=1;i<=4;i++) {
    scanf("%lf", &a);
    if (a>=max){
      max = a;
    }
    else if (min>=a){
      min = a;
    } 
  }

  printf("%lf \n %lf", max,min);
  return 0;
}
