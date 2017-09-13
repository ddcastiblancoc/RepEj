#include <iostream>
using namespace std;
int main()
{
  int n=0, i=1, j=0;
  cout<<"Escriba el valor a comprobar: ";
  cin>>n;
  if (n<=1)
    {
      cout<<"El valor "<<n<<" no es una entrada válida."<<endl;
    }      
  for (;i<=n;i++)
    {
      if (n%i==0)
	{
	  j++;
	}
    }
  if (j>2)
    {
      cout<<"El valor "<<n<<" es compuesto."<<endl;
    }
  else if (j==2)
    {
      cout<<"El valor "<<n<<" es primo."<<endl;
    }
  return 0;
}
