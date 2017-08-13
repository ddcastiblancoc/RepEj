#include <iostream>
int main(void)
{
  double x=0.0, y=0.0;
  std::cout<<"Escriba la cantidad a convertir, en millas"<<std::endl;
  std::cin>>x;
  y=(1.609)*x;
  std::cout<<"La cantidad, en kilómetros, es de "<<y<<" km"<<std::endl;
  return 0;
}
