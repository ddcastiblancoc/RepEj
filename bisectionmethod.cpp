#include <iostream>
#include <cmath>
double f(double x)
{
  return (exp(-x)-x); //Función f(x) a la cual aproximar su raíz
}
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  int NMAX=30, ii=1; //Número máximo de iteraciones NMAX
  double xl=0.0, xu=1.5, xr=0.0, x=0.5671432904097838729999; //Intervalo inicial [xl,xu], valor real x
  double eps=1.0e-6; //Precisión mínima de la raíz eps
  for (;ii<=NMAX;ii++)
    {
      xr=0.5*(xl+xu);
      if (std::fabs(f(xr))<=eps)
	{
	  break;
	}
      if (f(xr)*f(xl)<0)
	{
	  xu=xr;
	}
      else
	{
	  xl=xr;
	}
      std::cout<<ii<<'\t'<<xr<<'\t'<<f(xr)<<'\t'<<fabs((x-xr)/x)*100<<std::endl;
    }
  return 0;
}

      
  

  
