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
void rk4(std::vector<double> &data, double t, double h);
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
      rk4(y,t,dt);
    }
  return 0;
}
void rk4(std::vector<double> &data, double t, double h)
{
  std::vector<double> k1, k2, k3, k4, aux;
  k1.resize(data.size());
  k2.resize(data.size());
  k3.resize(data.size());
  k4.resize(data.size());
  aux.resize(data.size());
  for (int ii=0; ii<data.size(); ii++)
    {
      k1[ii]=dt*f(ii,t,data);
    }
  for (int ii=0; ii<data.size(); ii++)
    {
      aux[ii]=data[ii]+0.5*k1[ii];
    }
  for (int ii=0; ii<data.size(); ii++)
    {
      k2[ii]=dt*f(ii,t+0.5*dt,aux);
    }
  for (int ii=0; ii<data.size(); ii++)
    {
      aux[ii]=data[ii]+0.5*k2[ii];
    }
  for (int ii=0; ii<data.size(); ii++)
    {
      k3[ii]=dt*f(ii,t+0.5*dt,aux);
    }
  for (int ii=0; ii<data.size(); ii++)
    {
      aux[ii]=data[ii]+k3[ii];
    }
  for (int ii=0; ii<data.size(); ii++)
    {
      k4[ii]=dt*f(ii,t+dt,aux);
    }
  for (int ii=0; ii<data.size(); ii++)
    {
      data[ii]=data[ii]+(k1[ii]+2.0*k2[ii]+2.0*k3[ii]+k4[ii])/6.0;
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
