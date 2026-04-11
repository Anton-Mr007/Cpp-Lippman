//Код из учебника оказался некорректным, ниже приведена несколько модернизированная версия
#include <iostream>
int main()
{
    int currv1 = 0, v1 = 0;
    if(std::cin >> currv1)
    {
        int cnt = 1;
        while(std::cin >> v1)
        {
            if(v1 == currv1)
                ++cnt;
            else
            {
                std::cout << currv1 << " occurs " << cnt << " times" << std::endl;
                currv1 = v1;
                cnt = 1;
            }
        }
        std::cout << currv1 << " occurs " << cnt << " times" << std::endl;
    }
    //Ctrl+Z!!!!
    return 0;
}
