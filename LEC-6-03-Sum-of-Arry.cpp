#include <iostream>
using namespace std;
int main()
{
    int a[6];
    cout << "Please Enter the value :";
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum = sum + a[i];
    }
    cout << endl
         << "The sum of arry : " << sum;
    return 0;
}