#include <iostream>
#include <cmath>
double f(double x);
double firstderivativecentraldifforder2(double a, double b, double h);
double secondderivativecentraldifforder2(double a, double b, double c, double h);
int main(void)
{
  double time[6]={200.0,202.0,204.0,206.0,208.0,210.0};
  double angle[6]={0.75,0.72,0.70,0.68,0.67,0.66};
  double radialdistance[6]={5120.0,5370.0,5560.0,5800.0,6030.0,6240.0};
  int ii=3; //ii: valor en los arrays al cual aproximar velocidad/aceleración
  std::cout<<ii<<'\t'<<"v= ("<<firstderivativecentraldifforder2(radialdistance[ii+1],radialdistance[ii-1],time[ii+1]-time[ii-1])<<") er + ("<<radialdistance[ii]*firstderivativecentraldifforder2(angle[ii+1],angle[ii-1],time[ii+1]-time[ii-1])<<") ea"<<'\t'<<"a= ("<<(secondderivativecentraldifforder2(radialdistance[ii+1],radialdistance[ii],radialdistance[ii-1],0.5*(time[ii+1]-time[ii-1]))-radialdistance[ii]*pow(firstderivativecentraldifforder2(angle[ii+1],angle[ii-1],time[ii+1]-time[ii-1]),2.0))<<") er + ("<<radialdistance[ii]*secondderivativecentraldifforder2(angle[ii+1],angle[ii],angle[ii-1],0.5*(time[ii+1]-time[ii-1]))+2*firstderivativecentraldifforder2(radialdistance[ii+1],radialdistance[ii-1],time[ii+1]-time[ii-1])*firstderivativecentraldifforder2(angle[ii+1],angle[ii-1],time[ii+1]-time[ii-1])<<") ea"<<std::endl;
  return 0;
}
double firstderivativecentraldifforder2(double a, double b, double h)
{
  return (a-b)/h;
}
double secondderivativecentraldifforder2(double a, double b, double c, double h)
{
  return (a-2.0*b+c)/(pow(h,2.0));
}
