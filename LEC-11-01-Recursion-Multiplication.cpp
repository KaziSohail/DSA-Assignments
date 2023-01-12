// 1*2*3*4*5=120
// using loop and Recursion

#include <iostream>
using namespace std;

int f(int n)
{
    if (n == 1)
        return 1;
    else
        return n * f(n - 1);
}

int main()
{
    int fact = 1;
    for (int i = 1; i <= 5; i++)
        fact = fact * i;
    cout << fact << endl;

    int s = f(5);
    cout << s << endl;
    return 0;
}