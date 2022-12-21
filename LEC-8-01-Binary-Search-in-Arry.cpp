#include <iostream>
using namespace std;
int main()
{
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int val = 100;
    int n = (sizeof(array)) / (sizeof(int));
    int s = 0;
    int e = n - 1;
    int res = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (array[mid] == val)
        {
            res = mid;
            break;
        }
        else if (array[mid] > val)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    if (res == -1)
    {
        cout << "Element not fond";
    }
    else
    {
        cout << "Found at : " << res;
    }

    return 0;
}