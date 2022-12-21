#include <iostream>
using namespace std;
int main()
{
    int a[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int b[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int c[3][3];
    int temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            temp = 0;
            for (int k = 0; k < 3; k++)
            {
                temp = temp + a[i][k] * b[k][j];
                c[i][j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}