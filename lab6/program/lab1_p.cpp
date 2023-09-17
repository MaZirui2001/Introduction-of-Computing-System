#include <iostream>
int main()
{
    short n, m, result;
    result = 0;
    short pt = 1;
    std::cin >> n >> m;
    for(int i = 0; i < 16; i++)
    {
        if(pt & m) result += n;
        n += n;
        pt += pt;
    }
    std::cout << result;
    return 0;
}