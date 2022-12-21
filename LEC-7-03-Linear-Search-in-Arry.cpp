#include <iostream>
using namespace std;
int main()
{
    int array[] = {2, 5, 7, 9, 34, 68, 92, 47, 85};
    int i, val;
    cout << "Enter the value :";
    cin >> val;

    int n = (sizeof(array)) / (sizeof(int));
    for (i = 0; i <= n; i++)
    {
        if (array[i] == val)
        {
            cout << "Present at :" << i;
            break;
        }
    }

    if (i > n)
    {
        cout << "Not Present";
    }

    return 0;
}