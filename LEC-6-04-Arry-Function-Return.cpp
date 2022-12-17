#include <iostream>
using namespace std;
int total()
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

    return sum;
}

int main()
{
    int result = total();
    cout << "Sum in main function :" << result;
    return 0;
}

// Please Enter the value :1
// 1
// 1
// 1
// 1
// 1
// Sum in main function :6