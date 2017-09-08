#include <iostream>
int main(void)
{
  std::cout.precision(20);
  std::cout.setf(std::ios::scientific);
  int prod=1, ii=1, jj=1;
  for(;ii<=20;ii++)
    {
      for (;jj<=ii;jj++)
	{
	  prod*=jj;
	}
      std::cout<<ii<<"!="<<prod<<std::endl;
    }
  return 0;
}
