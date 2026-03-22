#include <iostream>
int main()
{
    std::cout << "Numbers between 10 and 0 inclusive:" << std::endl;
    for(int v = 10; v<=10 && v>=0; --v)
        std::cout << v << std::endl;
    return 0;
}
