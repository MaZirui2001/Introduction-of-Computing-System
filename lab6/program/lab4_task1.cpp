#include <iostream>
void fun1()
{
    r0 = r0 + 1;
    r1 = memory[10];
    r1 -= 1;
    r2 += 1;
    memory[10] = r1;
    if(r1 != 0) fun1();
    r2 -= 1;
    return;
}

int r0, r1, r2;
short memory[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5};
int main()
{
    r0 = 0;
    r2 = 0;
    fun1();
    return 0;
}