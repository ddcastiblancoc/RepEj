#include <iostream>
#include <cmath>
int integerPower(int base, int exponent);
int main(void)
{
  int n=0, m=0;
  std::cout<<"Ingrese el número a operar y el exponente a elevar al número:"<<std::endl;
  std::cin>>n;
  std::cin>>m;
  std::cout<<"El valor resulta ser: "<<integerPower(n,m)<<std::endl;
  return 0;
}
int integerPower(int base, int exponent)
{
  int potency=1;
  for (int ii=1; ii<=exponent; ii++)
    {
      potency*=base;
    }
  return potency;
}
