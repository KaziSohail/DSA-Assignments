#include <iostream>
using namespace std;
int main()
{
    int array[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i <= 7; i++)
    {
        if (array[i] == 2)
        {
            cout << "Present";
            break;
        }
        if (i == 7)
        {
            cout << "Not Present";
        }
    }

    return 0;
}