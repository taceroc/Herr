#include<cmath>
#include<fstream>

int main(void)
{
  std::fstream fout ("datos.txt");
  const double x = 0.0123; //rad
  const int N = 10;
  double sum = x;
  double term = x;

  
  for(int i=2; i<N; i++)
    {
      term = term*(-1)*x*x/((2*i)*(2*i+1));
      sum += term;
      fout<< i<< "\t"<< term<<"\t"<<sum<"\t"<< std::sin(x)<<"\n";
    }
  fout.close;

  
}
