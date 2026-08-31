// i want to make something that puts ur age in years, months and days.

#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;


    int age_in_years = age;
    int age_in_months = age * 12;
    int age_in_days = age * 365;
    

    cout << "Your age in years: " << age_in_years << " Years\n";
    cout << "Your age in months: " << age_in_months << " Months\n";
    cout << "Your age in days: " << age_in_days << " Days\n";

    return 0;
}
