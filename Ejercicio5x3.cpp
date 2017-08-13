#include <iostream>
int main(void)
{
  double val1=0, val2=0;
  std::cout<<"Escriba el primer valor"<<std::endl;
  std::cin>>val1;
  std::cout<<"Escriba el segundo valor"<<std::endl;
  std::cin>>val2;
  std::cout<<val1+val2<<std::endl;
  std::cout<<val1-val2<<std::endl;
  std::cout<<val1*val2<<std::endl;
  std::cout<<val1/val2<<std::endl;
  double max=0;
  if (val1>val2)
    {
    max=val1;
    }
  else
    {
    max=val2;
    }
  std::cout<<max<<std::endl;
  return 0;
}
