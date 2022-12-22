#include <iostream>
using namespace std;
int main()
{
    int a[] = {6, 5, 4, 3, 2, 1};
    int n = (sizeof(a)) / (sizeof(int));
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - (1 + i); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}