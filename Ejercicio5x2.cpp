#include <iostream>
int main(void)
{
  int ii=1;
  for (;ii<=20;ii++)
    {
      std::cout<<ii<<'\t';
      if (ii%5==0)
	{
	  std::cout<<'\n';
	}
    }
  return 0;
}
