#include <iostream>
int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int v4 = 0, v5 = 0;
    std::cin >> v4 >> v5;
    int begin = v4;
    int end = v5;
    while(begin>end)
    {
        int v6 = begin;
        begin = end;
        end = v6;
    }
    int v = begin;
    std::cout << "Numbers between " << begin << " and " << end << ":" << std::endl;
    while(v <= end)
    {
        std::cout << v << std::endl;
        v++;
    }
    return 0;
}
