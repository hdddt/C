#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



double randam(void){
  return (double)rand()/RAND_MAX;
}

int circle(double x,double y){
  if(x*x+y*y<=1){
    return 1;
  }
  else if (x*x+y*y>1){
    return 0;
  }
}

int main(void){
  srand((unsigned int)time(NULL));
  double a,b,pi;
  int i;
  int n=1000000;
  int m=0;
  for(i=1;i<=n;i++){
    a=randam();
    b=randam();
    m=m+circle(a,b);
  }
  pi = 4.0*m/n;
  printf("%lf\n",pi);
  return 0;
}
