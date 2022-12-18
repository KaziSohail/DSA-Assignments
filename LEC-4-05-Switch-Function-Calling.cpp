#include <iostream>
using namespace std;

int add()
{
    int a, b;
    cout << "Please Enter the first value : ";
    cin >> a;
    cout << "Please Enter the second value : ";
    cin >> b;
    int c;
    c = a + b;
    cout << "The addition of two number is = " << c << endl;
    return 0;
}

int sub()
{
    int a, b;
    cout << "Please Enter the first value : ";
    cin >> a;
    cout << "Please Enter the second value : ";
    cin >> b;
    int c;
    c = a - b;
    cout << "The subtraction of two number is = " << c << endl;
    return 0;
}

int mul()
{
    int a, b;
    cout << "Please Enter the first value : ";
    cin >> a;
    cout << "Please Enter the second value : ";
    cin >> b;
    int c;
    c = a * b;
    cout << "The multiplication of two number is = " << c << endl;
    return 0;
}

float div()
{
    float a, b;
    cout << "Please Enter the first value : ";
    cin >> a;
    cout << "Please Enter the second value : ";
    cin >> b;
    float c;
    c = a / b;
    cout << "The division of two number is = " << c << endl;
    return 0;
}

int main()

{
    int z;
    do
    {
        cout << "For Addition Enter 1" << endl;
        cout << "For Subtraction Enter 2" << endl;
        cout << "For Multiplication Enter 3" << endl;
        cout << "For Division Enter 4" << endl;
        cout << "Please Enter your choice :";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;
        default:
            break;
        }
        cout << "To continue press 1 :";
        cin >> z;
    } while (z = 1);

    return 0;
}