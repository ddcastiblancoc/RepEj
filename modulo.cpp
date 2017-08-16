//xd
#include <iostream>
int main(void)
{
  int a=0;
  std::cout<<"Escriba el valor a comprobar:"<<std::endl;
  std::cin>>a;
  (a%3==0)? std::cout<<"Es divisible."<<std::endl : std::cout<<"No es divisible."<<std::endl;
  return 0;
}

