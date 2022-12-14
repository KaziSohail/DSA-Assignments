// if ,esle if, else condition

#include <iostream>
using namespace std;

int main()
{
    int order;
    cin >> order;
    if (order == 1)
    {
        cout << "The tea is ready";
    }
    else if (order == 2)
    {
        cout << "The coffie is ready";
    }

    else
    {
        cout << "Error";
    }

    return 0;
}
