#include <iostream>
int main()
{
    short n, m, result;
    result = 0;
    std :: cin >> n >> m;
    do
    {
        m -= 1;
        result += n;
    }
    while(m != 0);
    std :: cout << result;
    return 0;
}