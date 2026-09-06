#include <math.h>
#include <iostream>
#include <iomanip>

//      [type]    [name]
typedef double    (*f) (double);

double Square(double x);
double Quadratic(double x);
double Integral(f = Square,
                double a = 0.0, 
                double b = 1.0);

int main ()
{
  std::cout << std::setprecision(5);
  std::cout << "Tích phân của x^2 từ 0 ----> 1.0: " << Integral() << '\n';
  std::cout << "Tích phân của x^2 từ 1.0 ---> 10.0: " << Integral(Square, 1.0, 10.0) << '\n';
  std::cout << "Tích phân của x^2 + 3x - 4 từ 1.0 ---> 10.0: " << Integral(Quadratic, 1.0, 10.0) << '\n';
  std::cout << "Tích phân của exp từ 0 ----> 1.0: " << Integral(exp) << '\n';
  std::cout << "Tích phân của sin từ 0 ----> PI/2: " << Integral(sin, 0, 3.14 / 2) << '\n';



  return 0;
}


double Square(double x)
{
  return x * x;
}

double Quadratic(double x)
{
  return pow(x, 2) - 3*x - 4;
}


double Integral(double f(double), 
                double a, 
                double b)
{
  int n = 1000;
  double are = 0.0;
  double h = (b - a) / n;

  for (int i = 0; i < n; i++)
  {
    are += f(a + i*h + h) + f(a + i*h);
  }

  return are * h / 2;
}


