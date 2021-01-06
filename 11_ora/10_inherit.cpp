#include <iostream>
class Shape
{
    int color;
public:
    Shape( int c ): color( c ) { }
    virtual double get_area() const = 0;
    virtual ~Shape() { }
    int get_color() const { return color; }
};
void print( Shape* p )
{
    std::cout << p->get_color() << ' ' << p->get_area()
              << std::endl;
}
class Circle: public Shape
{
    double rad;
public:
    Circle( int c, double r ): Shape( c ), rad( r ) { }
    virtual double get_area() const
    {
        return rad * rad * 3.14;
    }
};
int main()
{
    Shape* p = new Circle( 11, 3.4 );
    print( p );
    delete p;
}