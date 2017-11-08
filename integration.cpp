#include <iostream>
#include <cmath>
double f(double x);
double trapezoidal(double(*g)(double), double a, double b, double n);
double simpson(double(*g)(double), double a, double b, double n);
double richardson(double(*g)(double), double a, double b, double n);
int main(void)
{
  std::cout.precision(16);
  const double a=0.0; //Valor inicial del intervalo
  const double b=1.0; //Valor final del intervalo
  const double n=10.0; // Número de subintervalos
  const double r=M_PI; //Valor real
  std::cout<<"Real value/Error: "<<M_PI<<std::endl;
  std::cout<<"Trapezoidal Rule/Error: "<<trapezoidal(f, a, b, n)<<'\t'<<std::fabs((trapezoidal(f, a, b, n)-r)/r)*100<<std::endl;
  std::cout<<"Simpson's Rule/Error: "<<simpson(f, a, b, n)<<'\t'<<std::fabs((simpson(f, a, b, n)-r)/r)*100<<std::endl;
  std::cout<<"Richardson extrapolation/Error: "<<richardson(f, a, b, n)<<'\t'<<std::fabs((richardson(f, a, b, n)-r)/r)*100<<std::endl;
  return 0;
}
double f(double x)
{
  return 4.0/(1.0+pow(x,2.0)); //Función a integrar
}
double trapezoidal(double(*g)(double), double a, double b, double n)
{
  double sum=0.0, h=(b-a)/n;
  for (int ii=0;ii<=n;ii++)
    {
      double x=a+ii*h;
      if ((x==a)||(x==b))
	{
	  sum+=g(x);
	}
      else
	{
	  sum+=2.0*g(x);
	}
    }
  return (h/2.0)*sum;
}
double simpson(double(*g)(double), double a, double b, double n)
{
  double sum=0.0, h=(b-a)/n;
  for (int ii=0;ii<=n;ii++)
    {
      double x=a+ii*h;
      if ((x==a)||(x==b))
	{
	  sum+=g(x);
	}
      else if (ii%2==0)
	{
	  sum+=2.0*g(x);
	}
      else
	{
	  sum+=4.0*g(x);
	}
    }
  return (h/3.0)*sum;
}
double richardson(double(*g)(double), double a, double b, double n)
{
  return (4.0*trapezoidal(g, a, b, 2.0*n)-trapezoidal(g, a, b, n))/3.0;
}
