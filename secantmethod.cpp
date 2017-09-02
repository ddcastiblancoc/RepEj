#include <iostream>
#include <cmath>
double f(double x)
{
  return exp(-x)-x; //Función f(x) a la cual aproximar su raíz
}
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  int NMAX=30, ii=1;
  double xl=0.0, xu=1.5, xr=0.0, x=0.5671432904097838729999; //Puntos iniciales de referencia xl y xu, valor real x
  for (;ii<=NMAX;ii++)
    {
      xr=((f(xu)*xl)-(f(xl)*xu))/(f(xu)-f(xl));
      if (f(xr)==0)
	{
	  break;
	}
      else
	{
	  xl=xu;
	  xu=xr;
	}
      std::cout<<ii<<'\t'<<xr<<'\t'<<f(xr)<<'\t'<<fabs((x-xr)/x)*100<<std::endl;
    }
  return 0;
}

      
  

  
