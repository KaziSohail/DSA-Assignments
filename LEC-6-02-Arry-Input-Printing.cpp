#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout << "Please Enter the value :" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << "Given input is : " << a[i] << endl;
    }

    return 0;
}

// Please Enter the value :
// 1
// 2
// 3
// 4
// 5
// Given input is : 1
// Given input is : 2
// Given input is : 3
// Given input is : 4
// Given input is : 5