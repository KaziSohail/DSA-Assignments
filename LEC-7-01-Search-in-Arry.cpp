#include <iostream>
using namespace std;
int main()
{
    int array[7] = {5, 7, 10, 22, 25, 36, 77};
    for (int i = 0; i <= 6; i++)
    {
        if (array[i] == 77)
        {
            cout << "Present " << i;
            break;
        }
        if (i == 6)
        {
            cout << "Not Present";
        }
    }

    return 0;
}