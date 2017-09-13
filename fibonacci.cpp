#include <iostream>
int fibonacci(int n)
{
  if ((n==0)||(n==1))
    {
      return n;
    }
  else
    {
      return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(void)
{
  int n=10;
  std::cout<<fibonacci(n)<<std::endl;
  return 0;
}
  
