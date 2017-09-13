#include <iostream>
int prime(int n);
int main(void)
{
  int ii=1, NMAX=100;
  for (;ii<=NMAX;ii++)
    {
      if (prime(ii)==1)
	{
	  std::cout<<ii<<std::endl;
	}
    }
  return 0;
}
int prime(int n)
{
  int ii=1, jj=0;
  if (n<=1)
    {
      return 0;
    }      
  for (;ii<=n;ii++)
    {
      if (n%ii==0)
	{
	  jj++;
	}
    }
  if (jj>2)
    {
      return 0;
    }
  else if (jj==2)
    {
      return 1;
    }
}
  
