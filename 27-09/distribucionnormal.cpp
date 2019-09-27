#include <random>
#include <iostream>
#include <vector>
 
int main()
{
  const int NSAMPLE = 10000;
  int seed = 1;

  const double xmin = 0.0;
  const double xmax = 1.0;
  const double dx = 0.01;
  const int nbins = (xmax - xmin)/dx;
  std::vector<double> histo(nbins);
  
  std::mt19937 gen(seed); 
  std::normal_distribution<> d{0.5, 0.1}; //media, desviacion estandar
  
  for (int n = 0; n < NSAMPLE; ++n)
    {
      double r = d(gen);
      int idx = int (r/dx);
      histo[idx] = histo[idx] + 1;
    }

  for(int i = 0; i < nbins; i++)
    {
      std::cout << xmin + i * dx << "  " << histo[i]/NSAMPLE/dx<< "\n";
    }
}

//no olvidar que para compilar g++ -std=c++11 name.cpp
