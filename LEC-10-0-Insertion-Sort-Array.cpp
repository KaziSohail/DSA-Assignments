#include <iostream>
using namespace std;
void is(int a[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
}

int main()
{
    int a[] = {12, 4, 16, 9, 1, 7, 2, 3, 8};
    int n = (sizeof(a)) / (sizeof(int));
    is(a, n);
    return 0;
}