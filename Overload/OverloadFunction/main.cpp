#include <algorithm>
#include <cmath>
#include <ios>
#include <iostream>


int tinhMax(int a, int b, int c);
double tinhMax(double a, double b, double c);
int tinhMax(int *a, int n);
double tinhMax(double *a, int n);



int main () {


        int (*f1)(int, int, int);
        f1 = static_cast<int(*)(int, int, int)>(tinhMax);

        double (*f2)(double, double, double);
        f2 = static_cast<double(*)(double, double, double)>(tinhMax);
        std::cout << std::boolalpha;
        std::cout << "Function pointer f1: " << f1 << '\n';
        std::cout << "Function pointer f2: " << f2 << '\n';


        return 0;
}


int tinhMax(int a, int b, int c)
{
        return std::max(a, std::max(b, c));
}

double tinhMax(double a, double b, double c)
{
        return std::max(a, std::max(b, c));
}
