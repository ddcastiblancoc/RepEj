#include <iostream>
void squareofcharacters(char character, int size);
int main(void)
{
  char character;
  int size=0;
  std::cout<<"Ingrese el caracter a utilizar y tamaño del cuadrado de caracteres:"<<std::endl;
  std::cin>>character;
  std::cin>>size;
  squareofcharacters(character, size);
  return 0;
}
void squareofcharacters(char character, int size)
{
  for (int ii=1; ii<=size; ii++)
    {
      for (int jj=1; jj<=size; jj++)
	{
	  std::cout<<character;
	}
      std::cout<<std::endl;
    }
}
