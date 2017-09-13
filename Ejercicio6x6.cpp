#include <iostream>
#include <cmath>
double f(double x);
double g(double x);
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  int NMAX=30, ii=1;
  double xr=0.5, xr0=0, eps=0.01;
  for (;ii<=NMAX;ii++)
    {
      xr0=xr;
      xr=g(xr);
      std::cout<<ii<<'\t'<<xr<<'\t'<<f(xr)<<'\t'<<std::fabs((xr-xr0)/xr)*100.0<<'\t'<<std::fabs((0.768648-xr)/0.768648)*100.0<<std::endl;
      if (std::fabs((xr-xr0)/xr)*100.0<=eps)
	{
	  break;
	}
    }
  return 0;
}      
double f(double x)
{
  return sin(sqrt(x))-x;
}
double g(double x)
{
  return sin(sqrt(x));
}
