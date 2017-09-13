#include <iostream>
#include <cmath>
int prime(int n);
double lagrange(double n);
int main(void)
{
  int ii=1, jj=0, NMAX=1;
  for (;NMAX<=100;NMAX++)
    {
      for (;ii<=NMAX;ii++)
	{
	  if (prime(ii)==1)
	    {
	      jj++;
	    }
	}
      std::cout<<NMAX<<'\t'<<jj<<'\t'<<lagrange(NMAX)<<std::endl;
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
double lagrange(double n)
{
  return n/(log(n)-1.08366);
}
