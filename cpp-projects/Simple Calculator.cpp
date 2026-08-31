#include <iostream>
using namespace std;

int main()
{
    double number_1;
    double number_2;
    char operation;

    cout << "\nEnter Number 1: ";
    cin >> number_1;

    cout << "\nEnter Number 2: ";
    cin >> number_2;

    cout << "\nWhat operation do you want to do?\n - Addition (A)\n - Multiplication (M)\n - Substraction (S)\n - Division (D)\n:";
    cin >> operation;


    if (operation == 'A' || operation == 'a')
    {
        cout << "\nThe Addition is: " <<  number_1 + number_2;
    }
    else if (operation == 'M' || operation == 'm')
    {
        cout << "\nThe Multiplication: " << number_1 * number_2;
    }
    else if (operation == 'S' || operation == 's')
    {
        cout << "\nThe Substraction: " << number_1 - number_2;
    }
    else if (operation == 'D' || operation == 'd')
    {
        cout << "\nThe Division: " << number_1 / number_2;
    }
    else
    {
        cout << "\nPlease choose a valid operation.";
    }
    return 0;
}
