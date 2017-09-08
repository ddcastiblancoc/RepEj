#include <iostream>
int main(void)
{
  int x=0, y=0;
  std::cout<<"Escriba el número a comprobar:"<<std::endl;
  std::cin>>x;
  if ((x%2)==0)
    {
      std::cout<<"El número "<<x<<" es un par."<<std::endl;
    }
  else
    {
      std::cout<<"El número "<<x<<" es impar."<<std::endl;
    }
  return 0;
}
