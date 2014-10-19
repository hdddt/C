#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int addition(          int a, int b){ return a+b; }
int substruction(      int a, int b){ return a-b; }
int other(             int a, int b){ return   0; }

int main(int argc, char *argv[])
{
  int(*pfunc)(int, int);
  int pa, pb, i = 1;

  while(i < argc)
    {
      if(strcmp("addition", argv[i]) == 0)
	pfunc = addition;
      else if(strcmp("substruction", argv[i]) == 0)
        pfunc = substruction;
     else
	pfunc = other;

      pa = atoi(argv[i+1]);
      pb = atoi(argv[i+2]);
   

      printf("%s(%d,%d) = %d\n", argv[i], pa, pb, pfunc(pa,pb));
      i +=3;
    }
  return 0;
}
