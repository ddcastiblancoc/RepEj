#include <iostream>
int main(void)
{
  int x=0, y=0;
  char o=0;
  std::cout<<"Ingrese los números y la operación (+, -, *, /, %) a llevar a cabo:"<<std::endl;
  std::cin>>x;
  std::cin>>y;
  std::cin>>o;
  switch (o)
    {
    case '+':
      {
	std::cout<<x<<"+"<<y<<"="<<x+y<<std::endl;
	break;
      }
    case '-':
      {
       std::cout<<x<<"-"<<y<<"="<<x-y<<std::endl;
       break;
      }
    case '*':
      {
	std::cout<<x<<"*"<<y<<"="<<x*y<<std::endl;
	break;
      }
    case '/':
      {
	std::cout<<x<<"/"<<y<<"="<<x/y<<std::endl;
	break;
      }
    case '%':
      {
	std::cout<<x<<"mod("<<y<<")="<<x%y<<std::endl;
	break;
      }
    default:
      {
	std::cout<<"Operación no válida."<<std::endl;
      }
    }
  return 0;
}
