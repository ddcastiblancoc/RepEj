#include <iostream>
int main(void)
{
  int x=0, y=0, z=0;
  std::cout<<"Escriba el primer valor:"<<std::endl;
  std::cin>>x;
  std::cout<<"Escriba el segundo valor:"<<std::endl;
  std::cin>>y;
  std::cout<<"Escriba el tercer valor:"<<std::endl;
  std::cin>>z;
  int w1=0, w2=0, w3=0;
  if ((x>y)&&(x>z))
    {
      w3=x;
      if (y>=z)
	{
	  w2=y;
	  w1=z;
	    }
      else
	{
	  w2=z;
	  w1=y;
	}
    }
  else if ((y>x)&&(y>z))
    {
      w3=y;
      if (x>=z)
	{
	  w2=x;
	  w1=z;
	}
      else
	{
	  w2=z;
	  w1=x;
	}
    }
  else if ((z>x)&&(z>y))
    {
      w3=z;
      if (x>=y)
	{
	  w2=x;
	  w1=y;
	}
      else
	{
	  w2=y;
	  w1=x;
	}
    }
  else if ((x>z)&&(x=y))
    {
      w3=x;
      w2=y;
      w1=z;
    }
  else if ((y>x)&&(y=z))
    {
      w3=y;
      w2=z;
      w1=x;
    }
  else if ((x>y)&&(x=z))
    {
      w3=x;
      w2=z;
      w1=y;
    }
  else if (x=y=z)
    {
      w1=x;
      w2=y;
      w3=z;
    }
  std::cout<<"El orden de los valores dados es: "<<w1<<", "<<w2<<", "<<w3<<"."<<std::endl;
  return 0;
}
