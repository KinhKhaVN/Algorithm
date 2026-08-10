#include <iostream>
#include <math.h>
#include <cstdlib>




struct Point
{
        int x, y;

        Point(int x, int y): x(x), y(y) {};
};


void Print(Point p)
{
        std::cout << "(" << p.x << "," << p.y << ")\n"; 
}


int getDist(Point p1, Point p2)
{
        int dist = 0;

        int dx = p1.x - p2.x;
        int dy = p1.y - p2.y;

        dx *= dx;
        dy *= dy;

        dist = sqrt(dx + dy);

        return dist;
}


int main ()
{
        Point p = Point(1, 2);

        std::cout << "Hello from Pairs of Point"; 

        Print(p);

        return 0;
}
