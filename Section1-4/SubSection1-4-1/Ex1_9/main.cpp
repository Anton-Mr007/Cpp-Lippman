#include <iostream>
int main()
{
    int sum=0, v2=0;
    while(v2<50)
    {
        v2++;
    }

    while(v2<=100)
    {
        sum += v2;
        v2++;
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum <<std::endl;
    return 0;
}
