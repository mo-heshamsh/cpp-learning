#include <iostream>
using namespace std;

int main() {
    int num1;
    cout << "Choose Number 1: ";
    cin >> num1;

    int num2;
    cout << "\nChoose Number 2: ";
    cin >> num2;

    int num3;
    cout << "\nChoose Number 3: ";
    cin >> num3;

    if (num1 > num2 &&  num1 > num3) 
    {
        cout << "\nNumber 1, which is " << num1 << " Is the biggest. bigger than: " << num2 << " and " << num3;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "\nNumber 2, which is " << num2 << " Is the biggest. bigger than: " << num1 << " and " << num3;
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << "\nNumber 3, which is " << num3 << " Is the biggest. bigger than: " << num1 << " and " << num2;
    }
    return 0;
}
