#include <iostream>
int main(void)
{
  double a=0.0, b=0.0;
  int n=0.0, ii=0.0;
  std::cout<<"Ingrese el valor de los extremos del intervalo [a,b] y la cantidad de instantes de instantes requeridos n:"<<std::endl;
  std::cin>>a;
  std::cin>>b;
  std::cin>>n;
  std::cout<<"La lista correspondiente de números es:"<<std::endl;
  for (;ii<=(n-1);ii++)
    {
      std::cout<<a+((double(ii)*(b-a))/(double(n)-1))<<std::endl;
    }
  return 0;
}
