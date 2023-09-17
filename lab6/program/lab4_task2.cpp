#include <iostream>
short Divide8(short num)
{
    short result = 0;
    short n = 1;
    short r = 8;
    while(r != 0)
    {
        if(r & num) result += n;
        n += n;
        r += r;
    }
    return result;
}
int main()
{
    short r1;
    std :: cin >> r1;
    short div, r2;
    do
    {
        div = Divide8(r1);
        r2 = r1 & 7;
        r1 = div + r2;
    }
    while(r1 > 7);
    if(r1 == 7) r1 -= 7;
    std :: cout << r1;
    return 0;
    
}