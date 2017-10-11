#include <iostream>
void initializeid(double a[], int n); //size: número de filas (o columnas)
//void printmatrix(double a[], int n);
void initializematrix(double a[], int n);
void initializeproduct(double a[], double b[], int n);
int matrixequality(double a[], double b[], int n);
int main(void)
{
  int size=0;
  std::cout<<"Ingrese el número de filas (o columnas) de la matriz a corroborar:"<<std::endl;
  std::cin>>size;
  double idmatrix[size*size]={0.0};
  initializeid(idmatrix,size);
  double matrix[size*size]={0.0};
  initializematrix(matrix,size);
  double productmatrix[size*size]={0.0};
  initializeproduct(productmatrix, matrix, size);
  if (matrixequality(productmatrix, idmatrix, size)!=0)
    {
      std::cout<<"La matriz en cuestión, es ortogonal."<<std::endl;
    }
  else
    {
      std::cout<<"La matriz en cuestión, no es ortogonal."<<std::endl;
    }
  return 0;
}
void initializeid(double a[], int n)
{
  for (int ii=0; ii<n; ii++)
    {
      for (int jj=0; jj<n; jj++)
	{
	  if (ii==jj)
	    {
	      a[ii*n+jj]=1.0;
	    }
	  else
	    {
	      a[ii*n+jj]=0.0;
	    }
	}
    }
}
/*void printmatrix(double a[], int n)
{
  for (int ii=0; ii<n; ii++)
    {
      for (int jj=0; jj<n; jj++)
	{
	  std::cout<<a[ii*n+jj]<<'\t';
	}
      std::cout<<std::endl;
    }
    }*/
void initializematrix(double a[], int n)
{
  for (int ii=0; ii<n; ii++)
    {
      for (int jj=0; jj<n; jj++)
	{
	  std::cout<<"Ingrese el valor de la componente ("<<ii<<", "<<jj<<") de la matriz a comprobar:"<<std::endl;
	  std::cin>>a[ii*n+jj];
	}
    }
}
void initializeproduct(double a[], double b[], int n)
{
   for (int ii=0; ii<n; ii++)
    {
      for (int jj=0; jj<n; jj++)
	{
	  int s=0;
	  int kk=0, ll=0;
	  for (kk=ii*n, ll=jj*n; kk<(ii+1)*n, ll<(jj+1)*n; kk++, ll++)
	    {
	      s+=b[kk]*b[ll];
	    }
	  a[ii*n+jj]=s;
	}
    }
}
int matrixequality(double a[], double b[], int n)
{
   for (int ii=0; ii<n; ii++)
    {
      for (int jj=0; jj<n; jj++)
	{
	  if (a[ii*n+jj]-b[ii*n+jj]>0.01)
	    {
	      return 0;
	    }
       	}
    }
}

