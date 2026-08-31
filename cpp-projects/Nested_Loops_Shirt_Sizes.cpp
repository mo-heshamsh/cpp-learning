#include <iostream>
using namespace std;

int main()
{
    string shirts[] = {"Shirt 1", "Shirt 2", "Shirt 3"};
    string sizes[] = {"Small", "Medium", "Large"};

    for (int i = 0; i < 3; i++)
    {
        cout << "\n=================";
        cout << "\nShirt Name: ";
        cout << shirts[i] << "\n";
        cout << "Sizes Available: ";
        for (int j = 0; j < 3; j++)
        {
            cout << sizes[j];
            if (j < 2)
            {
                cout << ", ";
            }
        }
    }
    return 0;
}
