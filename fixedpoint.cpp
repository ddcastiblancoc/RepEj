#include <iostream>
#include <cmath>
double f(double x)
{
  return (exp(-x)-x); //Función f(x) a la cual aproximar su raíz
}
double g(double x)
{
  return (exp(-x)); //Función g(x) tal que x=g(x)
}
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  int NMAX=30, ii=1; //Número máximo de iteraciones NMAX
  double xr=0, x=0.5671432904097838729999; //Punto inicial de referencia xr, valor real x
  double eps=1.0e-6; //Precisión mínima de la raíz eps
  for (;ii<=NMAX;ii++)
    {
      xr=g(xr);
      if (std::fabs(f(xr))<=eps)
	{
	  break;
	}
      std::cout<<ii<<'\t'<<xr<<'\t'<<f(xr)<<'\t'<<fabs((x-xr)/x)*100<<std::endl;
    }
  return 0;
}

      
  

  
