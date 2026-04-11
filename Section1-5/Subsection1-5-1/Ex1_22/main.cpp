#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum, existing;
    if (std::cin >> sum)
    {
        while (std::cin >> existing)
        {
            sum += existing;
        }

        std::cout << sum << std::endl;
    }
    return 0;
}
