#include <random>
#include <iostream>
 
int main()
{
  int seed = 1; //semilla constante para tener los mismo datos
  std::mt19937 gen(seed); //Standard mersenne_twister_engine seeded with seed
  std::uniform_real_distribution<> dis(0.0, 1.0); //entre 0 y 1 abierto 
  for (int n = 0; n < 10000; ++n) {
        // Use dis to transform the random unsigned int generated by gen into a 
        // double in [0, 1). Each call to dis(gen) generates a new random double
     std::cout << dis(gen) << "\n ";
    }

}
//hacer un histograma que cuente los datos entre 0 y 0.1, entre 0.1 y 0.2 hasta 1. de 0 a 1 eje x y en y deberia ser constante si esta uniformemente distribuido (eje y count/numero de muestra = 1)
