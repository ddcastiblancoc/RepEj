#include <iostream>
#include <cmath>
double f(double x);
double g(double x);
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  int NMAX1=10, ii1=1;
  double xr1=2.0, xr01=0.0;
  for (;ii1<=NMAX1;ii1++)
    {
      xr01=xr1;
      xr1=xr1-(f(xr1)/g(xr1));
      std::cout<<ii1<<'\t'<<xr1<<'\t'<<f(xr1)<<'\t'<<std::fabs((xr1-xr01)/xr1)*100.0<<'\t'<<std::fabs((1.5321-xr1)/1.5321)*100.0<<std::endl;
    }
  std::cout<<'\v';
  int NMAX2=10, ii2=1;
  double xl2=2.0, xu2=1.666666, xr2=0.0, xr02=0.0;
  for (;ii2<=NMAX2;ii2++)
    {
      xr02=xr2;
      xr2=((f(xu2)*xl2)-(f(xl2)*xu2))/(f(xu2)-f(xl2));
      xl2=xu2;
      xu2=xr2;
      std::cout<<ii2<<'\t'<<xr2<<'\t'<<f(xr2)<<'\t'<<std::fabs((xr2-xr02)/xr2)*100.0<<'\t'<<std::fabs((1.5321-xr2)/1.5321)*100.0<<std::endl;
    }
  return 0;
}      
double f(double x)
{
  return pow(x,3)-3.0*x+1.0;
}
double g(double x)
{
  return 3.0*pow(x,2)-3.0;
}
