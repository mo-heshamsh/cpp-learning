#include <iostream>
using namespace std;

int main()
{
    string inputName, inputPass;
    string usernames;
    bool isLogged = false;
    int cash = 200;
    
    cout << "=== Welcome to Mo's Mini Market! ===";
    cout << "\nPlease Enter Your Username: ";
    cin >> inputName;
    while (inputName != "Mohamed" && inputName != "mohamed" && inputName != "Hesham" && inputName != "hesham")
    {
        cout << "\nSorry. Username isnt a store member. Try again. If you want to exit, type exit\n";
        cout << "Username: ";
        cin >> inputName;
        if (inputName == "Exit" || inputName == "exit")
        {
            cout << "\nProgram Exit Successfuly";
            return 0;
        } 
    }
    cout << "\nPlease Enter Password For " << inputName << ": ";
    cin >> inputPass;
    string correctPass = "";
    if (inputName == "Mohamed" || inputName == "mohamed")
    {
        correctPass = "ilovetacos";
    }
    else if (inputName == "Hesham" || inputName == "hesham")
    {
        correctPass = "ilovecheese";
    }
    while (inputPass != correctPass)
    {
        cout << "\nWrong Password for " << inputName << "! Try again. To exit, type exit.";
        cout << "\nPassword For " << inputName << ": ";
        cin >> inputPass;
        if (inputPass == "Exit" || inputPass == "exit")
        {
            cout << "\nProgram Exit Successfuly";
            return 0;
        } 
    }
    isLogged = true;
    cout << "\nSuccessfully Logged in!";
    cout << "\nWelcome Back, " << inputName << "!";
    cout << "\nYou currently have: " << cash << " EGP";

    string items[] = {"Pepsi", "Redbull", "Chipsy", "Iced Coffee", "Peanut Butter"};
    int stock[] = {30, 15, 45, 20, 10};
    double prices[] = {15, 50, 10, 30, 120};
    int buyOption;
    string yesno;
    int attempts = 2;


    while (isLogged)
    {
        int option;
        cout << "\n\n=== MAIN MENU ===";
        cout << "\nChoose Option using Option Number";
        cout << "\n1. View Stock";
        cout << "\n2. Buy Item (Cart)";
        cout << "\n3. Checkout";
        cout << "\n4. Exit";
        cout << "\n5. Beg for Money. " << attempts << " Attempts Left!";
        cout << "\nOption: ";
        cin >> option;
        switch (option)
        {
        case 1: // View Stock
        cout << "\n--- Current Stock ---\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "[" << i << "] " << " - " << items[i] << " - " << prices[i] << " EGP and " << stock[i] << " Left\n"; 
        }
        break;
        case 2: // Buy Item
        for (int i = 0; i < 5; i++)
        {
        cout << "[" << i << "] " << " - " << items[i] << " - " << prices[i] << " EGP and " << stock[i] << " Left\n"; 
        }
        cout << "\nChoose what would you like to buy (Using Numbers): ";
        cin >> buyOption;
        if (buyOption < 0 || buyOption > 4)
        {
            cout << "\nWrong Option! Please try again!";
            break;
        }
        else 
        {
            cout << "\nYou Have Selected: " << items[buyOption] << "\n";
        }

        break;
        case 3: // Checkout
        cout << "\nThe Items in you cart is: " << items[buyOption] << "\n";
        cout << items[buyOption] << " Costs: " << prices[buyOption] << " Would you like to buy it? (Yes/No): ";
        cin >> yesno;
        if (yesno == "Yes" || yesno == "yes")
        {
            if (prices[buyOption] <= cash)
            {
            cash -= prices[buyOption];
            stock[buyOption]--;
            cout << "\nThank you for purchasing " << items[buyOption] << "!";
            cout << "\nYour total cash now is: " << cash << " EGP";
            }
            else
            {
                cout << "\nInsufficient amount of cash!";
            }
        }
        else if (yesno == "No" || yesno == "no")
        {
            cout << "\nPurchase cancelled!";
        }

        break;

        case 4: // Exit
        cout << "\nProgram Exit Successfully\n";
        return 0;

        case 5:
        if (attempts > 0)
        { 
        cout << "\nArghh Fine! Here you go 25 EGP";
        attempts--;
        cash += 25;
        }
        else
        {
        cout << "\nI already gave you twice! Go away!";
        }
        break;

        default:
        cout << "\nInvalid Option! Please rechoose from 1-5";
        break;
    }
    }
    return 0;
}
