#include <iostream>
#include <cmath>
double f(double x, double y);
void euler(double h, double x0, double y0, double N);
int main(void)
{
  const double h=0.01; //Espaciado entre xi y xi+1
  const double x0=0.0; //Coordenada x del punto de valor inicial
  const double y0=1.0; //Coordenada y del punto de valor inicial
  const int N=100; //Número de iteraciones
  euler(h, x0, y0, N);
  return 0;
}
double f(double x, double y)
{
  return y; //Función f(x,y)
}
void euler(double h, double x0, double y0, double N)
{
  double y=y0;
  for (int ii=0; ii<=N; ii++)
    {
      double x=x0+ii*h;
      std::cout<<x<<'\t'<<y<<std::endl;
      y+=h*f(x,y);
    }
}
