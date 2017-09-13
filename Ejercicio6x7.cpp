#include <iostream>
#include <cmath>
double f(double x);
double g(double x);
double h(double x);
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  int NMAX1=3, ii1=1;
  double xr1=3.0, xr01=0;
  for (;ii1<=NMAX1;ii1++)
    {
      xr01=xr1;
      xr1=g(xr1);
      std::cout<<ii1<<'\t'<<xr1<<'\t'<<f(xr1)<<'\t'<<std::fabs((xr1-xr01)/xr1)*100.0<<'\t'<<std::fabs((3.56316-xr1)/3.56316)*100.0<<std::endl;
    }
  std::cout<<'\v';
  int NMAX2=3, ii2=1;
  double xr2=3.0, xr02=0;
  for (;ii2<=NMAX2;ii2++)
    {
      xr02=xr2;
      xr2=xr2-(f(xr2)/h(xr2));
      std::cout<<ii2<<'\t'<<xr2<<'\t'<<f(xr2)<<'\t'<<std::fabs((xr2-xr02)/xr2)*100.0<<'\t'<<std::fabs((3.56316-xr2)/3.56316)*100.0<<std::endl;
    }
  return 0;
}      
double f(double x)
{
  return 2.0*pow(x,3)-11.7*pow(x,2)+17.7*x-5.0;
}
double g(double x)
{
  return -0.11299435*pow(x,3)+0.661016949*pow(x,2)+0.282485875;
}
double h(double x)
{
  return 6.0*pow(x,2)-23.4*x+17.7;
}
