// calculator using switch case
#include <iostream>
using namespace std;
int main()
{
    char op;
    int num1, num2;
    cout << "Enter the operator(+,-,*,/): ";
    cin >> op;
    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;
    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:
        cout << "Error operator entered is not correct" << endl;
        break;
    }
    return 0;
}