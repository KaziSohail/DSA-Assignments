// Swapping the two value

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    int c;

    c = a;
    a = b;
    b = c;

    cout << "The Value of a:" << a << endl;
    cout << "The Value of b:" << b;

    return 0;
}