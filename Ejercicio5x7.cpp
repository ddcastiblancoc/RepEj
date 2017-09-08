#include <iostream>
int main(void)
{
  int ii1=0, jj1=0, N=5;
  for (ii1=1;ii1<=N;ii1++)
    {
      for (jj1=1;jj1<=ii1;jj1++)
	{
	  std::cout<<"*";
	}
      std::cout<<'\n';
    }
  std::cout<<'\v';
  int ii2=0, jj2=0;
  for (ii2=1;ii2<=N;ii2++)
    {
      for (jj2=N-ii2;jj2>=0;jj2--)
	{
	  std::cout<<"*";
	}
      std::cout<<'\n';
    }
  std::cout<<'\v';
  int ii3=0, jj3=0, kk3=0;
  for (ii3=1;ii3<=N;ii3++)
    {
      for (jj3=1;jj3<=ii3-1;jj3++)
	{
	  std::cout<<" ";
	}
      for (kk3=N-jj3;kk3>=0;kk3--)
	{
	  std::cout<<"*";
	}
      std::cout<<'\n';
    }
  std::cout<<'\v';
  int ii4=0, jj4=0, kk4=0;
  for (ii4=1;ii4<=N;ii4++)
    {
      for (jj4=1;jj4<=5-ii4;jj4++)
	{
	  std::cout<<" ";
	}
      for (kk4=N-jj4;kk4>=0;kk4--)
	{
	  std::cout<<"*";
	}
      std::cout<<'\n';
    }
  return 0;  
}
