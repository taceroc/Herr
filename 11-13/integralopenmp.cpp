#include<cstdio>
#include<cmath>

const int N = 1000000;
const double xmax = 10.0;
const double xmin = 0.0;
const double dx = (xmax-xmin)/N;

double fun(double x);
int main (void)
{
  double sum = 0.0;
  
#pragma omp parallel for reduction(+:sum) 
  for (int i = 1; i<N; i++)
    {
      double x = xmin + i*dx;
      sum += fun(x); 
    }
  sum *= dx;

  printf("%.4f \n", sum);
  return 0;
}

double fun(double x)
{
  return x*x;
}
