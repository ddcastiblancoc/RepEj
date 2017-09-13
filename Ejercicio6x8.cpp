#include <iostream>
#include <cmath>
double f(double x);
double g(double x);
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  int NMAX=16, ii=1;
  double xr=1.0, xr0=0.0;
  for (;ii<=NMAX;ii++)
    {
      xr0=xr;
      xr=xr-(f(xr)/g(xr));
      std::cout<<ii<<'\t'<<xr<<'\t'<<f(xr)<<'\t'<<std::fabs((xr-xr0)/xr)*100.0<<'\t'<<std::fabs((2.0946-xr)/2.0946)*100.0<<std::endl;
    }
  return 0;
}      
double f(double x)
{
  return pow(x,3)-2.0*x-5.0;
}
double g(double x)
{
  return 3.0*pow(x,2)-2.0;
}

