#include <iostream>
#include <cstdlib> //usar funciones libreria estandar par que sirva EXIT

int main(int argc, char **argv) //a.out 5?
{
  // declare variables
  const int N = 10;
  double * array; // puntero? señala arreglo?
  //reserve memory
  array = new double [N]; 
  // initialise array
  for (int ii = 0; ii < N; ++ii) {
    array[ii] = 2*(++ii); // != 2*(ii++) ?
    // ii = ii-1;
  }
  
  // print some values 
  int idx = 1;
  std::cout << array[idx] << std::endl; //agarra la casilla 0,1,2 <--
  //idx = 10; //indice por fuera, solo se puede hasta 9
  //std::cout << array[idx] << std::endl; // compiles, but ... 

  // free memory
  delete [] array;

  return EXIT_SUCCESS;
}
