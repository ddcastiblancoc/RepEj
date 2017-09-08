#include <iostream>
#include <cmath>
int main(void)
{
  double a=0, b=0, c=0;
  std::cout<<"Ingrese el valor del coeficiente a: ";
  std::cin>>a;
  std::cout<<"Ingrese el valor del coeficiente b: ";
  std::cin>>b;
  std::cout<<"Ingrese el valor del coeficiente c: ";
  std::cin>>c;
  if ((pow(b,2)-4*a*c)>0)
    {
      std::cout<<"El valor de la raíz x1 es de "<<(-b+sqrt(pow(b,2)-4*a*c))/(2*a)<<" y el de la raíz x2 es de "<<(-b-sqrt(pow(b,2)-4*a*c))/(2*a)<<"."<<std::endl;
    }
  else if ((pow(b,2)-4*a*c)==0)
    {
      std::cout<<"El valor de la raíz x es de multiplicidad 2 y tiene el valor de "<<(-b+sqrt(pow(b,2)-4*a*c))/(2*a)<<"."<<std::endl;
    }
  else
    {
      std::cout<<"Las raíces son complejas y tienen los valores x1="<<-b/(2*a)<<"+"<<(sqrt(4*a*c-pow(b,2)))/(2*a)<<"i, y x2="<<-b/(2*a)<<"-"<<(sqrt(4*a*c-pow(b,2)))/(2*a)<<"i."<<std::endl;
    }
  return 0;
}
