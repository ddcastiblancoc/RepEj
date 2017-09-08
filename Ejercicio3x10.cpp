#include <iostream>
#include <string>
using namespace std;
int main(void)
{
  string operation;
  double x=0, y=0;
  cout<<"Ingrese la operación a llevar a cabo (+, -, *, /, o plus, minus, mul, div):"<<endl;
  cin>>operation;
  cout<<"Ingrese los valores a operar:"<<endl;
  cin>>x;
  cin>>y;
  if ((operation=="+")||(operation=="plus"))
    {
      cout<<"El resultado de la operación '+' de los valores es: "<<x+y<<'.'<<endl;
    }
  else if ((operation=="-")||(operation=="minus"))
    {
      cout<<"El resultado de la operación '-' de los valores es: "<<x-y<<'.'<<endl;
    }
  else if ((operation=="*")||(operation=="mul"))
    {
      cout<<"El resultado de la operación '*' de los valores es: "<<x*y<<'.'<<endl;
    }
  else if ((operation=="/")||(operation=="div"))
    {
      if (y!=0)
	{
	  cout<<"El resultado de la operación '/' de los valores es: "<<x/y<<'.'<<endl;
	}
      else
	{
	  cout<<"El denominador es cero, división no válida."<<endl;
	}
    }
  else
    {
      cout<<"Operación no válida."<<endl;
    }
  return 0;
}
