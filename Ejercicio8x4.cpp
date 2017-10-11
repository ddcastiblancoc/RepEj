#include <iostream>
#include <cmath>
double f(double x, double y);
double xpartialderivative(double x, double y, double dx);
double ypartialderivative(double x, double y, double dy);
double xypartialderivative(double x, double y, double dx, double dy);
double exactxpartialderivative(double x, double y);
double exactypartialderivative(double x, double y);
double exactxypartialderivative(double x, double y);
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  double x=1.0, y=1.0, dx=0.0001, dy=0.0001; //x: punto evaluado en la derivada, h: espaciado entre puntos para la aproximación de la derivada
  std::cout<<xpartialderivative(x,y,dx)<<'\t'<<exactxpartialderivative(x,y)<<std::endl;
  std::cout<<ypartialderivative(x,y,dy)<<'\t'<<exactypartialderivative(x,y)<<std::endl;
  std::cout<<xypartialderivative(x,y,dx,dy)<<'\t'<<exactxypartialderivative(x,y)<<std::endl;
  return 0;
}
double f(double x, double y)
{
  return 3.0*x*y+3.0*x-pow(x,3.0)-3.0*pow(y,3.0); //función a la cual aproximar su derivada
}
double xpartialderivative(double x, double y, double dx)
{
  return (f(x+dx,y)-f(x-dx,y))/(2.0*dx);
}
double ypartialderivative(double x, double y, double dy)
{
  return (f(x,y+dy)-f(x,y-dy))/(2.0*dy);
}
double xypartialderivative(double x, double y, double dx, double dy)
{
  return (f(x+dx,y+dy)-f(x+dx,y-dy)-f(x-dx,y+dy)+f(x-dx,y-dy))/(4.0*dx*dy);
}
double exactxpartialderivative(double x, double y)
{
  return 3.0*y+3.0-3.0*pow(x,2.0);
}
double exactypartialderivative(double x, double y)
{
  return 3.0*x-9.0*pow(y,2.0);
}
double exactxypartialderivative(double x, double y)
{
  return 3.0;
}
