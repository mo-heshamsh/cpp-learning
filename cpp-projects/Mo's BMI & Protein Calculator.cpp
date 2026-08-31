#include <iomanip>
#include <iostream>
using namespace std;

using us = unsigned short;

int main() {
    us age;
    double height;
    double weight;
    string name;
    char gender;

    cout << "================================================\n";
    cout << "== Welcome To Mo's BMI & Protein Calculator! ==\n";
    cout << "================================================\n";

    cout << "Enter your name: ";
    cin >> name;

    cout << "================================================\n";

    cout << "Hi " << name << ", Please Enter your age: ";
    cin >> age;

    cout << "================================================\n";

    cout << "Enter your gender (f/m): ";
    cin >> gender;

    cout << "================================================\n";

    cout << "Enter your height (in meters): ";
    cin >> height;

    cout << "================================================\n";

    cout << "Enter your weight (in kg): ";
    cin >> weight;

    cout << "================================================\n";


    double bmi = weight / (height * height);
    double recommended_protien = weight * 1.1;
    double daily_scoop = recommended_protien / 25;

    cout << "Your BMI is: " << static_cast<int>(bmi);
    cout << "\nYour recommended protein scoop per day is: " << fixed << setprecision(1) << recommended_protien << " grams";
    cout << "\nYour recommended protein scoop intake is: " << static_cast<int>(daily_scoop) << " Scoops\n";
    cout << "========================================================\n";
    cout << "== Thank you for using Mo's BMI & Protein Calculator! ==\n";
    cout << "========================================================\n";

    return 0;
}
