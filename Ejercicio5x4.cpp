#include <iostream>
int main(void)
{
  int x=0, y=0;
  std::cout<<"Ingrese los números a comparar:"<<std::endl;
  std::cin>>x;
  std::cin>>y;
  if (x%y==0)
    {
      std::cout<<x<<" es múltiplo de "<<y<<"."<<std::endl;
    }
  else if (y%x==0)
    {
      std::cout<<y<<" es múltiplo de "<<x<<"."<<std::endl;
    }
  else
    {
      std::cout<<x<<" no es múltiplo de "<<y<<", o viceversa."<<std::endl;
    }
  return 0;
}
