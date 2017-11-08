#include <iostream>
#include <cmath>
struct Vector2D
{
  double x{0.0}, y{0.0};
  struct Vector2D operator+(const Vector2D &v2);
  struct Vector2D operator-(const Vector2D &v2);
};
void print(const struct Vector2D &v);
void add(const struct Vector2D &v1, const struct Vector2D &v2, struct Vector2D &v3);
struct Vector2D Vector2D::operator+(const Vector2D &v2)
{
  Vector2D tmp;
  tmp.x=x+v2.x;
  tmp.y=y+v2.y;
  return tmp;
}
struct Vector2D Vector2D::operator-(const Vector2D &v2)
{
  Vector2D tmp;
  tmp.x=x-v2.x;
  tmp.y=y-v2.y;
  return tmp;
}
int main(void)
{
  struct Vector2D a, b, c;
  a.x=2.0;
  a.y=-5.7;
  b.x=3.2;
  b.y=1.7;
  print(a);
  print(b);
  std::cout<<'\v'<<std::endl;
  //Adición explícita
  c.x=a.x+b.x;
  c.y=a.y+b.y;
  print(c);
  //Aplicación de una función externa
  add(a,b,c);
  print(c);
  //Sobrecarga del operador +: extender la funcionalidad de un operador
  c=a+b; //c=a.operator+(b);
  print(c);
  c=a-b;
  print(c);
  return 0;
}
void print(const struct Vector2D &v)
{
  std::cout<<"("<<v.x<<","<<v.y<<")"<<std::endl;
}
void add(const struct Vector2D &v1, const struct Vector2D &v2, struct Vector2D &v3)
{
  v3.x=v1.x+v2.x;
  v3.y=v1.y+v2.y;
}
