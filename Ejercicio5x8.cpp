#include <iostream>
#include <cmath>
int main(void)
{
  std::cout.precision(10);
  double sum=0;
  int ii=1, jj=0;
  for (;ii<=1000;ii++,jj++)
    {
      sum+=(pow(-1,double(jj)))*(4/(2*double(ii)-1));
      std::cout<<ii<<'\t'<<sum<<std::endl;
    }
  return 0;
}
