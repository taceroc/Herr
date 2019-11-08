#include <omp.h>
#include <stdio.h>
#include <cmath>

int main(int argc, char *argv[])
{
  const int N = 30000000;
  int i;
  double *a;
  a = new double [N];

  #pragma omp parallel for
  for(i = 0; i < N; i++)
    {
      a[i] = 2*std::sin(i)*std::cos(i)/3.98;
    }

  double sum = 0;
  #pragma omp parallel for reduction(+:sum)
  for(i=0; i<N; i++)
    {
      sum += a[i];
    }

  printf("%.16e\n", sum/N);


  delete [] a;
  return 0;
}
