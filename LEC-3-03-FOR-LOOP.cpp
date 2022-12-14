// sum of number 1 to 10

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of 1 to 10 = " << sum;
    return 0;
}