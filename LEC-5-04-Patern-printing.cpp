#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 5; i++)
        for (int i = 0; i <= 5; i++)
        {
            for (int k = 1; k <= i; k++)
            {
                cout << " ";
            }
            for (int j = 1; j <= 5 - i; j++)
            {
                cout << "*";
            }

            cout << endl;
        }
    return 0;
}