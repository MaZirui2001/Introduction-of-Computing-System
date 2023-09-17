#include <iostream>
short r0, r1, r2, r3, r4, r5, r6, r7;
void Pow()
{
    r6 = r2;
    r3 = 0;
    r4 = r3 + 1;
    do{

        r5 = r4 & r2;
        if(r5 != 0) r3 = r3 + r6;
        r6 += r6;
        r4 += r4;
    }while(r4 != 0);
    return;
    
}
void Mod()
{
    r3 = ~r2;
    r3 += 1;
    r4 = 0;
    do{
        r4 += r3;
        r5 = r4 + r0;
    }while(r5 > 0);
    return;

}
void Judge()
{
    do{
        Pow();
        r3 = ~r3;
        r3 += 1;
        r3 = r0 + r3;
        if(r3 < 0) goto OVER;
        Mod();
        if(r5 == 0) goto IsNotPrimer;
        r2 += 1;
    }while(1);
IsNotPrimer: r1 = 0;
OVER:   return;
    
}
int main()
{
    r1 = 0;
    r2 = r1 + 2;
    r1 += 1;
    std:: cin >> r0;
    Judge();
    std::cout << r1;
    return 0;
}