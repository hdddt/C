#include <stdio.h>


int main(void)
{
 
  char x[50];
  char *px = x;
  char y[50];
  char *py = y;
  char z[100];
  char *pz = z;
  int i,j,nx,ny;


  printf("Input first text > ");
  scanf("%s", px);

  printf("Input second text > ");
  scanf("%s", py);


  nx=0;
  ny=0;
  while(*x[nx] != "¥0")nx++;
  while(*y[ny] != "¥0")nx++;



  printf("%d %d",nx,ny);
  for(i=0; i<nx; i++)
    {
    z[i]=x[i];
    }
  printf("%d",i);
 for(j=0; j<ny; j++)
       {
         z[j+i] = y[j];
	 printf("%c",z[j+i]);
       }
    
 while(*pz !="¥0")
   {
     putchar(*(pz++));
   }

 putchar ('¥n');


  return 0;			   
}
