#include <iostream>
int main()
{
  double pennies=0.0, nickels=0.0, dimes=0.0, quarters=0.0, halfdollars=0.0, onedollarcoins=0.0;
  std::cout<<"Insert your number of pennies:"<<std::endl;
  std::cin>>pennies;
  std::cout<<"Insert your number of nickels:"<<std::endl;
  std::cin>>nickels;
  std::cout<<"Insert your number of dimes:"<<std::endl;
  std::cin>>dimes;
  std::cout<<"Insert your number of quarters:"<<std::endl;
  std::cin>>quarters;
  std::cout<<"Insert your number of half dollars:"<<std::endl;
  std::cin>>halfdollars;
  std::cout<<"Insert your number of one dollar coins:"<<std::endl;
  std::cin>>onedollarcoins;
  if (pennies==1)
    {
      std::cout<<"You have "<<pennies<<" penny."<<std::endl;
    }
  else
    {
      std::cout<<"You have "<<pennies<<" pennies."<<std::endl;
    }
  if (nickels==1)
    {
      std::cout<<"You have "<<nickels<<" nickel."<<std::endl;
    }
  else
    {
      std::cout<<"You have "<<nickels<<" nickels."<<std::endl;
    }
  if (dimes==1)
    {
      std::cout<<"You have "<<dimes<<" dime."<<std::endl;
    }
  else
    {
      std::cout<<"You have "<<dimes<<" dimes."<<std::endl;
    }
  if (quarters==1)
    {
      std::cout<<"You have "<<quarters<<" quarter."<<std::endl;
    }
  else
    {
      std::cout<<"You have "<<quarters<<" quarters."<<std::endl;
    }
  if (halfdollars==1)
    {
      std::cout<<"You have "<<halfdollars<<" half dollar."<<std::endl;
    }
  else
    {
      std::cout<<"You have "<<halfdollars<<" half dollars."<<std::endl;
    }
  if (onedollarcoins==1)
    {
      std::cout<<"You have "<<onedollarcoins<<" one dollar coin."<<std::endl;
    }
  else
    {
      std::cout<<"You have "<<onedollarcoins<<" one dollar coins."<<std::endl;
    }
  double x1=0.0, x2=0.0, x3=0.0, x4=0.0, x5=0.0, x6=0.0, y1=0.0, y2=0.0, y3=0.0, y4=0.0, y5=0.0, y6=0.0, z1=0.0, z2=0.0;
  x1=pennies;
  x2=nickels*5;
  x3=dimes*10;
  x4=quarters*25;
  x5=halfdollars*50;
  x6=onedollarcoins*100;
  y1=x1/100;
  y2=x2/100;
  y3=x3/100;
  y4=x4/100;
  y5=x5/100;
  y6=x6/100;
  z1=x1+x2+x3+x4+x5+x6;
  z2=y1+y2+y3+y4+y5+y6;
  if (z1==1)
    {
      std::cout<<"The value of all your coins is "<<z1<<" cent or $"<<z2<<"."<<std::endl;
    }
  else
    {
      std::cout<<"The value of all your coins is "<<z1<<" cents or $"<<z2<<"."<<std::endl;
    }
  return 0;
}
