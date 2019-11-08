    #include <omp.h>
    #include <stdio.h>
#include<cmath>

    int main(int argc, char *argv[]) {
      const int N = 3000000;
      int i, *a;
      a = new int [N];

    #pragma omp parallel for
      double sum = 0.0;
      for(i = 0; i < N; i++)
	{
	  a[i] = 2*i;
	  sum += a;
	}
      double prom = a/N;

      delete [] a;
      return 0;

      
    }
