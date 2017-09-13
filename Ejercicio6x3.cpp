#include <iostream>
#include <cmath>
double f(double x);
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double xl1=0.5, xu1=1.0, xr1=0.0, eps1=10.0, xr01=0.0;
  int ii1=1, NMAX1=30;
  for (;ii1<=NMAX1;ii1++)
    {
      xr01=xr1;
      xr1=0.5*(xl1+xu1);
      if (f(xl1)*f(xr1)<0)
 	{
	  xu1=xr1;
	}
      else
	{
	  xl1=xr1;
	}
      std::cout<<ii1<<'\t'<<xr1<<'\t'<<f(xr1)<<'\t'<<std::fabs((xr1-xr01)/xr1)*100<<'\t'<<std::fabs((0.579409-xr1)/0.579409)*100<<std::endl;
      if (std::fabs((xr1-xr01)/xr1)*100<=eps1)
	{
	  break;
	}
    }
  std::cout<<'\v';
  double xl2=0.5, xu2=1.0, xr2=0.0, eps2=0.2, xr02=0.0;
  int ii2=1, NMAX2=30;
  for (;ii2<=NMAX2;ii2++)
    {
      xr02=xr2;
      xr2=(f(xu2)*xl2-f(xl2)*xu2)/(f(xu2)-f(xl2));
      if (f(xl2)*f(xr2)<0)
 	{
	  xu2=xr2;
	}
      else
	{
	  xl2=xr2;
	}
      std::cout<<ii2<<'\t'<<xr2<<'\t'<<f(xr2)<<'\t'<<std::fabs((xr2-xr02)/xr2)*100<<'\t'<<std::fabs((0.579409-xr2)/0.579409)*100<<std::endl;
      if (std::fabs((xr2-xr02)/xr2)*100<=eps2)
	{
	  break;
	}
    }
  return 0;
}
double f(double x)
{
  return 0.7*pow(x,5)-8.0*pow(x,4)+44.0*pow(x,3)-90.0*pow(x,2)+82.0*x-25.0;
}
