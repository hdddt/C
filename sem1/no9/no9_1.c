#include <stdio.h>

int sum(int x){
  if (x == 1){
    return 1;
  }
  else{
    return sum(x - 1) + x;
  }
}

int main(void){
  int n;
  scanf("%d",&n);
  printf("%d\n",sum(n));
  return 0;
}
