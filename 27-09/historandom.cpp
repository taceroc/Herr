#include <random>
#include <iostream>
#include <vector>
 
int main()
{
  const int NSAMPLE = 10000000;
  int seed = 1;

  const double xmin = 0.0;
  const double xmax = 1.0;
  const double dx = 0.01;
  const int nbins = (xmax - xmin)/dx;
  std::vector<double> histo(nbins);
  
  std::mt19937 gen(seed); 
  std::uniform_real_distribution<> dis(xmin, xmax);
  
  for (int n = 0; n < NSAMPLE; ++n)
    {
      double r = dis(gen);
      int idx = int (r/dx);
      histo[idx] = histo[idx] + 1;
    }

  for(int i = 0; i < nbins; i++)
    {
      std::cout << xmin + i * dx << "  " << histo[i]/NSAMPLE/dx<< "\n";
    }
}
//hacer un histograma que cuente los datos entre 0 y 0.1, entre 0.1 y 0.2 hasta 1. de 0 a 1 eje x y en y deberia ser constante si esta uniformemente distribuido (eje y count/numero de muestra = 1)
