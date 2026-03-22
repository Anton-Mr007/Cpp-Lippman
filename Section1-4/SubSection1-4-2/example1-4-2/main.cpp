#include <iostream>
int main ()
{
    int sum = 0;
    for (int v1 = 1; v1 <= 10; ++v1)
        sum += v1;
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}
