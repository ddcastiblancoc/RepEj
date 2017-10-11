#include <iostream>
#include <cmath>
#include <array>
#include <vector>
const int N=10;
void initcstyle(double a[], int size);
void initstdarray(std::array<double,N> &a);
void initvector(std::vector<double> &a);
double meancstyle(double a[], int size);
double stddevcstyle(double a[], int size);
double meanstdarray(std::array<double,N> &a);
double stddevstdarray(std::array<double,N> &a);
double meanvector(std::vector<double> &a);
double stddevvector(std::vector<double> &a);
int main(void)
{
  const int N=10;
  double array1[N]={0};
  std::array<double,N> array2={0};
  std::vector<double> array3(N);
  initcstyle(array1,N);
  initstdarray(array2);
  initvector(array3);
  std::cout<<"Media: "<<meancstyle(array1,N)<<'\t'<<"Desviación estándar: "<<stddevcstyle(array1,N)<<std::endl;
  std::cout<<"Media: "<<meanstdarray(array2)<<'\t'<<"Desviación estándar: "<<stddevstdarray(array2)<<std::endl;
  std::cout<<"Media: "<<meanvector(array3)<<'\t'<<"Desviación estándar: "<<stddevvector(array3)<<std::endl;
  return 0;
}
void initcstyle(double a[], int size)
{
  for (int ii=0;ii<size;ii++)
    {
      a[ii]=ii;
    }
}
void initstdarray(std::array<double,N> &a)
{
  for (int ii=0;ii<a.size();ii++)
    {
      a[ii]=ii;
    }
}
void initvector(std::vector<double> &a)
{
  for (int ii=0;ii<a.size();ii++)
    {
      a[ii]=ii;
    }
}
double meancstyle(double a[], int size)
{
  double sum=0.0;
  for (int ii=0;ii<size;ii++)
    {
      sum+=a[ii];
    }
  return sum/N;
}
double stddevcstyle(double a[], int size)
{
  double sum=0.0;
  for (int ii=0;ii<size;ii++)
    {
      sum+=pow(a[ii]-meancstyle(a,size),2.0);
    }
  return sqrt(sum/N);
}
double meanstdarray(std::array<double,N> &a)
{
  double sum=0.0;
  for (int ii=0;ii<a.size();ii++)
    {
      sum+=a[ii];
    }
  return sum/N;
}
double stddevstdarray(std::array<double,N> &a)
{
  double sum=0.0;
  for (int ii=0;ii<a.size();ii++)
    {
      sum+=pow(a[ii]-meanstdarray(a),2.0);
    }
  return sqrt(sum/N);
}
double meanvector(std::vector<double> &a)
{
  double sum=0.0;
  for (int ii=0;ii<a.size();ii++)
    {
      sum+=a[ii];
    }
  return sum/N;
}
double stddevvector(std::vector<double> &a)
{
  double sum=0.0;
  for (int ii=0;ii<a.size();ii++)
    {
      sum+=pow(a[ii]-meanvector(a),2.0);
    }
  return sqrt(sum/N);
}
