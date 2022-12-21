#include <iostream>
using namespace std;
int main()
{
    int array[] = {5, 7, 10, 22, 25, 36, 77};
    int n = (sizeof(array)) / (sizeof(int));
    cout << "Enter the number to search :";
    int val;
    cin >> val;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == val)
        {
            cout << "Present at :" << i;
            break;
        }
        if (i < n)
        {
            cout << "Not Present";
        }
    }

    return 0;
}