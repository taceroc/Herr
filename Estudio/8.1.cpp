#include<cstdio>
#include<math.h>

int main(void)

{
  int n; double nmax = 5000; double S = 0;
  double L;
  //const	double ln = log(nmax);
  for(n = 1.0; n <= nmax; n++)
   {
      S = 1.0/n + S;
      L = S - log(n + 0.5);
      std::printf("%d %f\n",n,L);
   }
  return 0;

}
