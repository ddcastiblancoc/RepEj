#include <iostream>
#include <cmath>
double f(double x);
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xl=4.0, xu=5.0, xr=0.0, eps=0.5, xr0=0.0;
  int ii=1, NMAX=30;
  for (;ii<=NMAX;ii++)
    {
      xr0=xr;
      xr=(f(xu)*xl-f(xl)*xu)/(f(xu)-f(xl));
      if (f(xl)*f(xr)<0)
 	{
	  xu=xr;
	}
      else
	{
	  xl=xr;
	}
      std::cout<<ii<<'\t'<<xr<<'\t'<<f(xr)<<'\t'<<std::fabs((xr-xr0)/xr)*100<<'\t'<<std::fabs((2.666666666-xr)/2.666666666)*100<<std::endl;
      if (std::fabs((xr-xr0)/xr)*100<=eps)
	{
	  break;
	}
    }
  return 0;
}
double f(double x)
{
  return pow(x,2)-18;
}
