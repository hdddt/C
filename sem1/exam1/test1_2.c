#include <stdio.h>

int main(void){

  int age;

  scanf("%d", &age);
  
  if(age<=5){
    printf("0\n");
  }
  else if(age<=15){
    printf("800\n");
  }
  else if(age>=60){
    printf("1000\n");
  }
  else{
    printf("1500\n");
  }
  return 0;
}
