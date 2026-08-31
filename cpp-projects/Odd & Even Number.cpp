#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "\nThe number you chose: " << num << " Is even!";
    }
    else
    {
        cout << "\nThe number you chose: " << num << " Is odd!";
    }
    return 0;
}
