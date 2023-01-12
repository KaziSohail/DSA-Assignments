#include <iostream>
using namespace std;
int total(int n)
{
    if (n == 1)
        return 1;
    else
        return n + total(n - 1);
}
int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
        sum = 0;
    for (int i = 1; i <= 10; i++)
        sum = sum + i;
    cout << sum << endl;

    int s = total(10);
    cout << s << endl;
    return 0;
}