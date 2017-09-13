#include <iostream>
#include <cmath>
double f(double x);
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xl=0.0, xu=1.0, xr=0.0, eps=5.0, xr0=0.0;
  int ii=1, NMAX=30;
  for (;ii<=NMAX;ii++)
    {
      xr0=xr;
      xr=0.5*(xl+xu);
      if (f(xl)*f(xr)<0)
 	{
	  xu=xr;
	}
      else
	{
	  xl=xr;
	}
      std::cout<<ii<<'\t'<<xr<<'\t'<<f(xr)<<'\t'<<std::fabs((xr-xr0)/xr)*100.0<<'\t'<<std::fabs((0.41810-xr)/0.41810)*100.0<<std::endl;
       if (std::fabs((xr-xr0)/xr)*100.0<=eps)
	{
	  break;
	}
    }
  return 0;
}
double f(double x)
{
  return -12.0*pow(x,5)-6.0*pow(x,3)+10.0;
}
