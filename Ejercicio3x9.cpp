#include <iostream>
#include <string>
using namespace std;
int main(void)
{
  string x;
  cout<<"Ingrese el nombre del número a comprobar:"<<endl;
  cin>>x;
  if (x=="cero")
    {
      cout<<"El dígito correspondiente del nombre ingresado es 0."<<endl;
    }
  else if (x=="uno")
    {
      cout<<"El dígito correspondiente del nombre ingresado es 1."<<endl;
    }
  else if (x=="dos")
    {
      cout<<"El dígito correspondiente del nombre ingresado es 2."<<endl;
    }
  else if (x=="tres")
    {
      cout<<"El dígito correspondiente del nombre ingresado es 3."<<endl;
    }
  else if (x=="cuatro")
    {
      cout<<"El dígito correspondiente del nombre ingresado es 4."<<endl;
    }
  else
    {
      cout<<"Entrada no válida."<<endl;
    }
  return 0;
}
  
