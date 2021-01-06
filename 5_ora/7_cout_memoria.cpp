#include <iostream>
#include <vector>
int main()
{
    int a = 4;
    double d = 12.23;
    std::vector<int> v;
    void* p = &a;
    std::cout << p << std::endl;
    p = &d;
    std::cout << p << std::endl;
    p = &v;
    std::cout << p << std::endl;
}