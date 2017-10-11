#include <iostream>
#include <cmath>
double f(double x);
double forwarddifforder1(double x, double h);
double forwarddifforder2(double x, double h);
double backwarddifforder1(double x, double h);
double backwarddifforder2(double x, double h);
double centraldifforder2(double x, double h);
double centraldifforder4(double x, double h);
double richardsonext(double x, double h);
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double h=M_PI/12.0, dx=0.1; //x: punto evaluado en la derivada, h: espaciado entre puntos para la aproximación de la derivada
  for (double x=-6.0; x<=6.0; x+=dx)
    {
      std::cout<<x<<'\t'<<forwarddifforder1(x,h)<<'\t'<<forwarddifforder2(x,h)<<'\t'<<backwarddifforder1(x,h)<<'\t'<<backwarddifforder2(x,h)<<'\t'<<centraldifforder2(x,h)<<'\t'<<centraldifforder4(x,h)<<'\t'<<richardsonext(x,h)<<std::endl;
    }
  return 0;
}
double f(double x)
{
  return std::cos(x); //función a la cual aproximar su derivada
}
double forwarddifforder1(double x, double h)
{
  return (f(x+h)-f(x))/h;
}
double forwarddifforder2(double x, double h)
{
  return (-f(x+2.0*h)+4.0*f(x+h)-3.0*f(x))/(2.0*h);
}
double backwarddifforder1(double x, double h)
{
  return (f(x)-f(x-h))/h;
}
double backwarddifforder2(double x, double h)
{
  return (3.0*f(x)-4.0*f(x-h)+f(x-2.0*h))/(2.0*h);
}
double centraldifforder2(double x, double h)
{
  return (f(x+h)-f(x-h))/(2.0*h);
}
double centraldifforder4(double x, double h)
{
  return (-f(x+2.0*h)+8.0*f(x+h)-8.0*f(x-h)+f(x-2.0*h))/(12.0*h);
}
double richardsonext(double x, double h)
{
  return (4.0*centraldifforder2(x,h)-centraldifforder2(x,0.5*h))/3.0;
}

//plot "datos.dat" using 1:2 w lp title 'forward1', "datos.dat" using 1:3 w lp title 'forward2', "datos.dat" using 1:4 w lp title 'backward1', "datos.dat" using 1:5 w lp title 'backward2', "datos.dat" using 1:6 w lp title 'central2', "datos.dat" using 1:7 w lp title 'central4', "datos.dat" using 1:8 w lp title 'richardson', -sin(x)
