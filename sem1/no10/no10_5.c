#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  
  srand((unsigned int)time(NULL));
  int a[10],r,i,j,k,count;
  
  for(i=0;i<10;i++){

    for (j=0;j>0;j++){
      r=rand()%10;
      count=0;
      for(k=0;k<i;k++){
	if(r==a[k]){
	  count++;
	}
      }
      if(count==0){
	a[i]=r;
	break;
      }
    }
  }
  printf("%d %d %d %d %d %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
return 0;

  }
