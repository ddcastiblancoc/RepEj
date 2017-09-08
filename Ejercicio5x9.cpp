#include <iostream>
int main(void)
{
  int n=0, ii=1;
  std::cout<<"Ingrese el número de asteriscos: ";
  std::cin>>n;
  for (;ii<=n;ii++)
    {
      std::cout<<"*";
    }
  std::cout<<'\n';
  return 0;
}
