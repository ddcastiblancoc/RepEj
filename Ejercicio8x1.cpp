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
double error(double aprox);
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double x=M_PI/4.0, h=M_PI/12.0; //x: punto evaluado en la derivada, h: espaciado entre puntos para la aproximación de la derivada
  std::cout<<forwarddifforder1(x,h)<<'\t'<<error(forwarddifforder1(x,h))<<std::endl;
  std::cout<<forwarddifforder2(x,h)<<'\t'<<error(forwarddifforder2(x,h))<<std::endl;
  std::cout<<backwarddifforder1(x,h)<<'\t'<<error(backwarddifforder1(x,h))<<std::endl;
  std::cout<<backwarddifforder2(x,h)<<'\t'<<error(backwarddifforder2(x,h))<<std::endl;
  std::cout<<centraldifforder2(x,h)<<'\t'<<error(centraldifforder2(x,h))<<std::endl;
  std::cout<<centraldifforder4(x,h)<<'\t'<<error(centraldifforder4(x,h))<<std::endl;
  std::cout<<richardsonext(x,h)<<'\t'<<error(richardsonext(x,h))<<std::endl;
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
double error(double aprox)
{
  double exact=-1/sqrt(2); //exact: valor exacto de la derivada en el punto
  return std::fabs((exact-aprox)/exact)*100.0;
}  
