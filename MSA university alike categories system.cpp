#include <iostream>
using namespace std;

int main()
{
    double percantage;
    string college;
    cout << "Welcome to MSA University!";
    cout << "\nEnter your Thanaweya Amma Percantage (Without %): ";
    cin >> percantage;
    if (percantage < 55)
    {
        cout << "\nSorry your percantage doesn't qualify you to study in MSA University";
        return 0;
    }
    else if (percantage > 100)
    {
        cout << "\nPlease enter a valid percantage.";
        return 0;
    }

    cout << "\nEnter the college you want to join: (Medicine or CS?) ";
    cin >> college;
    if (college != "Medicine" && college != "medicine" && college != "CS" && college != "cs")
    {
        cout << "\nSorry. we dont have this college in MSA University.";
        return 0;
    }

    if (percantage >= 80)
    {
        cout << "\nYou are in category A:";
        if (college == "CS" || college == "cs")
        {
            cout << "\nyou pay only 100,000 EGP a year.";
        }
        else if (college == "Medicine" || college == "medicine")
        {
            cout << "\nyou pay only 125,000 EGP a year.";
        }
    }
    else if (percantage >= 70)
    {
        cout << "\nYou Are in category B: ";
        if (college == "CS" || college == "cs")
        {
        cout << "\nYou pay only 150,000 EGP a year.";
        }
        else if (college == "Medicine" || college == "medicine")
        {
            cout << "\nYou pay only 200,000 EGP a year.";
        }
    }    
    else if (percantage >= 60)
    {
        cout << "\nYou are in category C: ";
        if (college == "CS" || college == "cs")
        {
            cout << "\nYou pay only 200,000 EGP a year.";
        }
        else if (college == "Medicine" || college == "medicine")
        {
            cout << "\nYou pay only 275,000 EGP a year.";
        }
    } 
    else if (percantage >= 55)
    {
        if (college == "CS" || college == "cs")
        {
            cout << "\nYou are in category D: ";
            cout << "\nYou pay only 350,000 EGP a year.";
        }
        else if (college == "Medicine" || college == "medicine")
        {
            cout << "\nSorry. Medicine takes from minimum 60%";
        }
    }   

    return 0;
}
