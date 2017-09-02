#include <iostream>
#include <cmath>
double f(double x)
{
  return exp(-x)-x; //Función f(x) a la cual aproximar su raíz
}
double g(double x)
{
  return -exp(-x)-1; //Derivada de la función f
}
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  int NMAX=30, ii=1;
  double xr=0.0, x=0.5671432904097838729999; //Punto inicial de referencia xr, valor real x
  for (;ii<=NMAX;ii++)
    {
      xr=xr-(f(xr)/g(xr));
      if (f(xr)==0)
	{
	  break;
	}
      std::cout<<ii<<'\t'<<xr<<'\t'<<f(xr)<<'\t'<<fabs((x-xr)/x)*100<<std::endl;
    }
  return 0;
}

      
  

  
