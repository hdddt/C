#include <stdio.h>

int main(void){
  
  FILE *fp;
  int A[72][72],B[72][72],x,y;
  fp=fopen("picture.dat","r");
  for (y=0;y<72;y++){
    for(x=0;x<72;x++){
      fscanf(fp,"%d",&A[x][y]);
    }
  }
  fclose(fp);

  for (y=0;y<72;y++){
    for(x=0;x<72;x++){
     B[72-x][72-y]=A[x][y];
    }
  }


    for (y=0;y<72;y++){
      for(x=0;x<72;x++){
	printf("%c",B[x][y]);
      }
      printf("\n");
    }
    return 0;
}
