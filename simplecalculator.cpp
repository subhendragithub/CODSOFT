#include <iostream>
using namespace std;
int add(int x, int y)
{
    return x + y;
}

int subtraction(int x, int y)
{
    return x - y;
}

int multiplication(int x, int y)
{
    return x * y;
}

float division(int x, int y)
{
    if (y == 0)
    {
        cout << "Can not be divide by 0" << endl;
    }
    return float(x) / y;
}
int main()
{
    char operation;
    int num1, num2;
    cout << "Enter an operation(+,-,*,/)" << endl;
    cin >> operation;

    cout << "Enter two numbers:";
    cin >> num1 >> num2;

    switch (operation)
    {
    case '+':
        cout << add(num1, num2) << endl;
        break;

    case '-':
        cout << subtraction(num1, num2) << endl;
        break;

    case '*':
        cout << multiplication(num1, num2) << endl;
        break;

    case '/':
        cout << division(num1, num2) << endl;
        break;

    default:
        cout << "Incorrect operation" << endl;
    }

    return 0;
}