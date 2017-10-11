#include <iostream>
int isPerfect(int n);
int main(void)
{
  for (int ii=1; ii<=10000; ii++)
    {
      if (isPerfect(ii)==1)
	{
	  std::cout<<ii<<'\t';
	  for (int jj=1; jj<ii; jj++)
	    {
	      if (ii%jj==0)
		{
		  std::cout<<jj<<'\t';
		}
	    }
	  std::cout<<std::endl;
	}
    }
  return 0;
}
int isPerfect(int n)
{
  int sum=0;
  for (int ii=1; ii<n; ii++)
    {
      if (n%ii==0)
	{
	  sum+=ii;
	}
    }
  if (sum==n)
    {
      return 1;
      //std::cout<<"El número "<<n<<" es perfecto."<<std::endl;
    }
  else
    {
      return 0;
      //std::cout<<"El número "<<n<<" no es perfecto."<<std::endl;
    } 
}
