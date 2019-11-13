#include <cstdio>
#include <cmath>
#include <vector>
#include <numeric>
#include <omp.h>

const int N = 1000000;
const double xmax = 10.0;
const double xmin = 0.0;
const double dx = (xmax-xmin)/N;

double fun(double x);
int main (void)
{
  double sum = 0.0;
  std::vector<double> partial;//tamaño nthreads;




  
  //#pragma omp parallel for reduction(+:sum) 
  //#pragma omp parallel reduction(+:sum)
#pragma omp parallel
  {
   int tid = omp_get_thread_num();
   int nthreads = omp_get_num_threads();

   if (0 == tid)
     {
       partial.resize(nthreads);
     }

#pragma omp barrier
   
   int size  = N/nthreads;
   int init = tid*size;

   for (int i = init; i < init + size; i++)
    {
      double x = xmin + i*dx;
      partial[tid] += fun(x); 
    }
  partial[tid] *= dx;
 }
  printf("%.15e \n", std::accumulate(partial.begin(), partial.end(), 0.0));
  return 0;
}

double fun(double x)
{
  return x*x;
}
