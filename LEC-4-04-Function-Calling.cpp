#include <iostream>
using namespace std;

int add()
{
    int a = 5;
    int b = 10;
    int c = a + b;

    return c;
}

int main()
{
    int result = add();
    cout << result;
    return 0;
}