#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> v1 >> v2;
    if (v1 > v2)
    {
        for(; v2 <= v1; v2++)
        {
            std::cout << v2 << std::endl;
        }
    }

    else if (v1 < v2)
    {
        for(; v1 <= v2; v1++)
        {
            std::cout << v1 << std::endl;
        }
    }

    if (v1 == v2)
    {
        std::cout << "There are no numbers in the interval";
    }

    return 0;
}
