#include <iostream>
#include <cmath>
#include <vector>
const double k=1.23;
const double m=0.987;
const double x0=0.787;
const double v0=0.0;
const double t0=0.0;
const double tn=15.0;
const double dt=0.1;
const int steps=tn/dt;
void euler(std::vector<double> &data, double t, double h);
double f(int ii, double t, const std::vector<double> &y);
int main(void)
{
  std::vector<double> y(2);
  y[0]=0.787;
  y[1]=0.0;
  for (int ii=0; ii<steps; ii++)
    {
      double t=0.0+ii*dt;
      std::cout<<t<<'\t'<<y[0]<<'\t'<<y[1]<<std::endl;
      euler(y,t,dt);
    }
  return 0;
}
void euler(std::vector<double> &data, double t, double h)
{
  std::vector<double> datatmp=data;
  for (int ii=0; ii<data.size(); ii++)
    {
      data[ii]=datatmp[ii]+dt*f(ii,t,datatmp);
    }
}
double f(int ii, double t, const std::vector<double> &y)
{
  if (0==ii)
    {
      return y[1];
    }
  else if (1==ii)
    {
      return (-k*y[0])/m;
    }
  else
    {
      std::cerr<<"BAD index: "<<ii<<std::endl;
      return 0;
    }
}
