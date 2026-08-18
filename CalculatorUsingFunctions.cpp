#include <iostream>
using namespace std;

void calc(double numOne, double numTwo, string op)
{
    if (op == "addition")
    {
        cout << numOne << " + " << numTwo << " = " << numOne + numTwo << "\n";
    }
    else if (op == "multiplication")
    {
        cout << numOne << " * " << numTwo << " = " << numOne * numTwo << "\n";
    }
    else if (op == "division")
    {
        if (numTwo == 0)
        {
            cout << "\nSorry! cannot divide by zero.\n";
        }
        else
        {
        cout << numOne << " / " << numTwo << " = " << numOne / numTwo << "\n";
        }
    }
    else if (op == "substraction")
    {
        cout << numOne << " - " << numTwo << " = " << numOne - numTwo << "\n";
    }
    else
    {
        cout << "\nPlease Choose a valid operation\n";
    }
}

int main()
{
    double numOne, numTwo;
    string op;
    string yesno;
    while (true)
    {
    cout << "\nPlease Enter Number one: \n";
    cin >> numOne;
    cout << "\nPlease Enter Number Two: \n";
    cin >> numTwo;
    cout << "\nPlease Choose an operation. (Addition/Multiplication/Division/Substraction.): ";
    cin >> op;
    for (int i = 0; i < op.length(); i++)
    {
        op[i] = tolower(op[i]);
    }
    calc(numOne, numTwo, op);
    cout << "\nWould you like to do another operation? (Yes/No): ";
    cin >> yesno;
    for (int i = 0; i < yesno.length(); i++)
    {
        yesno[i] = tolower(yesno[i]);
    }
    if (yesno == "no")
    {
        cout << "\nCalculator Exit Successfuly.";
        return 0;
    }
    }
    return 0;
}