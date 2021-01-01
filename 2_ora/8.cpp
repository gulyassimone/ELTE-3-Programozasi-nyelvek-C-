#include <iostream>
int main()
{
    int x = 5;
    int *p = &x;
    std::cout << p << ' ' << *p << std::endl;
    *p = 8;
    std::cout << x << std::endl;
    const int y = 6;
    const int *q = &y;
    std::cout << *q << std::endl;
    q = &x;
    std::cout << *q << std::endl;
    int * const icp = &x;
    *icp = 2;
    std::cout << x << std::endl;
    icp = &x;
}