#include <iostream>
#include <cstdlib>
#include <cmath>
#include<cstdio>

int foo(int a, int b);
int bar(int a, int b);
double baz(double x);

int main (int argc, char **argv)
{
  int ii, jj;
  ii =  0;
  jj = -1;
  foo(ii, jj);
  foo(jj, ii);
  
  baz(25.9);

  return EXIT_SUCCESS;
}

int foo(int a, int b)
{
  //if(a == 0 or a == 0 or bar(a,b)==0){
  //  std::cout<<"Division por cero\n"
  //  return 0;}
  if(a == 0)
    return std::printf("Division por cero: a = 0\n");
  if(b == 0)
    return std::printf("Division por cero: b = 0\n");
  if(bar(a,b) == 0)
    return std::printf("Division por cero: bar = 0\n");
  
  
  return a/b + b/bar(a, b) + b/a;
}

int bar(int a, int b)
{
  //unsigned int c = a;
  int c = a;
  return c + a - b;
}

double baz(double x)
{
  if (x == 0)
    return 0;
  //double v = 1-(x+1);
  return std::sqrt(x);
}
