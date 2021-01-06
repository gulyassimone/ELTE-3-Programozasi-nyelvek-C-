#include <iostream>
struct complex
{
    double re, im;
};
int main()
{
    int a = 5;
    int *p = &a;
    complex c;
    complex* q = &c;
    const char* s = "xyz";
    std::cout << p << std::endl
              << q << std::endl
              << s << std::endl
              << *s << std::endl;
}