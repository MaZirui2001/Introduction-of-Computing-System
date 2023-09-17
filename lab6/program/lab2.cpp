#include <iostream>
int main()
{
    int r0 = 0;
    int r1 = 1;
    int r2 = 1;
    int r3 = 0;
    int r4 = 1023;
    int num;
    std::cin >> r0;
    int r5 = r0;
    int r7 = 2;
    r0 -= 2;
    if(r0 <= 0) r7 = r5;
    else 
    {
        do
        {
            r3 = r1 + r1;
            r1 = r2;
            r2 = r7;
            r7 = r7 + r3;
            r0 = r0 - 1;
        } while (r0 > 0);
    }
    r7 = r7 & r4;
    std::cout << r7 << std::endl;
    return 0;
}