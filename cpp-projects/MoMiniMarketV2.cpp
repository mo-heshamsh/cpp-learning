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
    for (int i = 0; i < inputName.length(); i++)
        {
           inputName[i] = tolower(inputName[i]);
        }
    while (inputName != "mohamed" && inputName != "hesham")
    {
        cout << "\nSorry. Username isnt a store member. Try again. If you want to exit, type exit\n";
        cout << "Username: ";
        cin >> inputName;
        for (int i = 0; i < inputName.length(); i++)
        {
           inputName[i] = tolower(inputName[i]);
        }
        if (inputName == "exit")
        {
            cout << "\nProgram Exit Successfuly";
            return 0;
        } 
    }
    cout << "\nPlease Enter Password For " << inputName << ": ";
    cin >> inputPass;
    for (int i = 0; i < inputPass.length(); i++)
        {
           inputPass[i] = tolower(inputPass[i]);
        }
    string correctPass = "";
    if (inputName == "mohamed")
    {
        correctPass = "ilovetacos";
    }
    else if (inputName == "hesham")
    {
        correctPass = "ilovecheese";
    }
    while (inputPass != correctPass)
    {
        cout << "\nWrong Password for " << inputName << "! Try again. To exit, type exit.";
        cout << "\nPassword For " << inputName << ": ";
        cin >> inputPass;
        if (inputPass == "exit")
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
    int cart[5] = {0, 0, 0, 0, 0};
    double total = 0;
    bool isEmpty = true;


    while (isLogged)
    {
        int option;
        cout << "\n\n=== MAIN MENU ===";
        cout << "\nChoose Option using Option Number";
        cout << "\n1. View Stock";
        cout << "\n2. Add To Cart";
        cout << "\n3. Checkout";
        cout << "\n4. Exit";
        cout << "\n5. Beg for Money. " << attempts << " Attempts Left!";
        cout << "\n6. View Cart";
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
        case 2: // Add To Cart
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
            cout << "\nAdded " << items[buyOption] << " To Cart\n";
            cart[buyOption]++;
        }

        break;
        case 3: // Checkout
        isEmpty = true;
        total = 0;
        {
        for (int i = 0; i < 5; i++)
        { 
            if (cart[i] > 0)
            {   
                isEmpty = false;
                total += prices[i] * cart[i];
            }
            
        }
        if (isEmpty) {
        cout << "\nyour cart is empty!\n";
        break;
        }
        cout << "\n=== checkout ===\n";
        cout << "your cart summary:\n";
        for (int i = 0; i < 5; i++) {
        if (cart[i] > 0) {
            cout << "- " << items[i] << " (x" << cart[i] << ") (" << (prices[i] * cart[i]) << " egp)\n";
        }
        }
        cout << "---------------------\n";
        cout << "total bill: " << total << " egp\n";
        if (cash >= total) {
        cash -= total;
        for (int i = 0; i < 5; i++) {
            stock[i] -= cart[i];
            cart[i] = 0;
        }
        cout << "\npurchase successful! paid " << total << " egp.\n";
        cout << "remaining cash: " << cash << " egp\n";
        cout << "thank you for shopping at mo's mini market!\n";
    } else {
        cout << "\ninsufficient cash balance!\n";
    }

    break;
     }

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

        case 6: // View Cart
        {
        bool isempty = true;
        double total = 0;
        for (int i = 0; i < 5; i++)
        {
            if (cart[i] > 0)
            {
                isEmpty = false;
                cout << "- " << items[i] << " (x" << cart[i] << ") (" << (prices[i] * cart[i]) << " EGP)\n";
                total += prices[i] * cart[i];
            }
        }

         if (!isEmpty)
         {
          cout << "\nTotal will be: " << total << " EGP";
         }
        if (isEmpty)
            {
            cout << "\nYour Cart is Empty!";
            }
        }
        break;


        default:
        cout << "\nInvalid Option! Please rechoose from 1-6";
        break;
    }
    }
    return 0;
}
