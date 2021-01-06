#include <iostream>
#include <vector>
#include <map>
class complex
{
public:
    complex( double re = 0.74, double im = 0.15 )
    {
        std::cout << re << ' ' << im << std::endl;
    }
};
void f()
{
    complex a( 1.23, 4.56 );
    complex b( 2.54 );
    complex c;
    std::map<int, complex> m;
    m[ 3 ];
    std::vector<complex> v( 4 );
}

int main()
{
    f();
}