#include <iostream>
int testPalindrome(char a[], int n);
int main(void)
{
  int N=0;
  std::cout<<"Ingrese el número de caracteres a verificar:"<<std::endl;
  std::cin>>N;
  char word[N];
  std::cout<<"Ingrese la cadena de caracteres a verificar:"<<std::endl;
  std::cin>>word;
  if (testPalindrome(word,N)==0)
    {
      std::cout<<"La cadena de caracteres en cuestión no es un palíndromo."<<std::endl;
    }
  else
    {
      std::cout<<"La cadena de caracteres en cuestión es un palíndromo."<<std::endl;
    }
  return 0;
}
int testPalindrome(char a[], int n)
{
  if (n%2==0)
    {
      for (int ii=0;ii<=0.5*(n-2);ii++)
	{
	  int s=0;
	  s=int(a[ii])-int(a[n-1-ii]);
	  if (s!=0)
	    {
	      return 0;
	    }
	}
    }
  else
    {
      for (int ii=0;ii<=0.5*(n-3);ii++)
	{
	  int s=0;
	  s=int(a[ii])-int(a[n-1-ii]);
	  if (s!=0)
	    {
	      return 0;
	    }
	}
    }
}
