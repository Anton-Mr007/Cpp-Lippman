#include <iostream>
    int main()
{
    int sum = 0;
    for(int v2 = 50; v2 <= 100; ++v2)
        sum += v2;
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
    return 0;
}
