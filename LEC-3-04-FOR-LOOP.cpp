// Multiply 1 to 5 using while loop eg.(1*2*3*4*5=120)

#include <iostream>
using namespace std;

int main()
{
    int mul = 1;
    // in multiplication sum value should be 1. otherwise there will always be 0.
    int i = 1;
    while (i <= 5)
    {
        mul = mul * i;
        i++;
    }
    cout << "The multiplication of (1*2*3*4*5) = " << mul;

    return 0;
}