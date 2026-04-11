#include <iostream>
int main()
{
    int sum = 0, v1 = 0;
    while(v1<=10)
    {
        sum += v1;
        v1++;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}
