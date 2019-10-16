#include <stdio.h>

int main()
{
  int x = 0;
  printf("x = %d\n", x);


  int i = 0;
  int j = 0;
  int a[10] = {0}; int b[10] = {0}; //inicializar arreglos antes estaba asi int a[10] 
  for (i = 0; i < 10; i++ ) {
    j += a[i];
  }
  if (j == 77) 
    printf("hello there\n");
}
