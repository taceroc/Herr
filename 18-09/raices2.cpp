#include <cstdio>
#include <math.h>

float f(float a, float b, float c);

int main(void)

{
  float a = 1;
  float b = 1;
  float c = 1;
  float discrim;
  //double realpart;
  //double imgpart;
  float x1p, x1n, x2p, x2n;


  for (int n = 1; n< 11; n++)
    {
      c = pow(10.0, -n);
      discrim = b*b - 4*a*c;

      x1p =(-b + sqrt(discrim)) / (2*a);
      x1n =(-b - sqrt(discrim)) / (2*a);
      x2p = (-2*c)/(b + sqrt(discrim));
      x2n = (-2*c)/(b - sqrt(discrim));
      std::printf("%10d %10.6f %10.6f %10.6f %10.6f\n",n,x1p,x1n,x2p,x2n);

    }
  return 0;
}
