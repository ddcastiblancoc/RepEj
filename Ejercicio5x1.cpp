#include <iostream>
#include <cmath>
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  int sum=0, ii=1;
  for (;ii<=99;ii=ii+2)
    {
      sum+=ii;
      std::cout<<ii<<'\t'<<sum<<std::endl;
    }
  return 0;
}
