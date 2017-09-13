#include <iostream>
#include <cmath>
double f(double x);
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xl=5.0, xu=10.0, xr=0.0, xr0=0.0;
  int ii=1, NMAX=3;
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
      std::cout<<ii<<'\t'<<xr<<'\t'<<f(xr)<<'\t'<<fabs((xr-xr0)/xr)*100<<'\t'<<fabs((6.40512-xr)/6.40512)*100<<std::endl;
    }
  std::cout<<'\v';
  std::cout<<(-2.5-sqrt(pow(2.5,2)+4.0*0.5*4.5))/(-2.0*0.5)<<std::endl;
  return 0;
}
double f(double x)
{
  return -0.5*pow(x,2)+2.5*x+4.5;
}
