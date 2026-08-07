#include <iostream>
using namespace std;

int main() 
{
    int points;
    cout << "Please Enter your points: ";
    cin >> points;

    if (points > 0 && points <= 499)
    {
        cout << "\nYour Points Level are level 3, and your points are: " << points;
    }
    else if (points > 500 && points <= 999)
    {
        cout << "\nYour points level are 2, and your points are: " << points;
    }
    else if (points >= 1000)
    {
        cout << "\nYour points level are 1, and your points are: " << points;
    }
    return 0;
}