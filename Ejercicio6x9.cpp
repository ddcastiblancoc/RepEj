#include <iostream>
#include <cmath>
int main(void)
{
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  int NMAX=3, ii=0, jj=1;
  double xr=1.0;
  for (;ii<=29;ii++)
    {
      for (;jj<=NMAX;jj++)
	{
	  xr=xr-((((double(ii)*M_PI)/29.0)-xr+0.9*sin(xr))/(-1+0.9*cos(xr)));
	  std::cout<<xr<<std::endl;
	}
      std::cout<<ii<<'\t'<<(double(ii)*M_PI)/29.0<<'\t'<<xr<<'\t'<<((double(ii)*M_PI)/29.0)-xr+0.9*sin(xr)<<std::endl;
    }
  return 0;
}
