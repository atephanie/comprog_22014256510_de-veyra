#include <iostream>
using namespace std;

int main() {
    
    cout << "Hello, I am Stephanie Mae !!! Welcome to my first C++ application" "\n";
    string name;
    cout << "Hey! What is your name? ";
    cin >> name; 
    cout << "Good Day " << name << "! It's nice to meet you!" "\n\n";
    
    int Month, Day, Year;
    
    cout << "When is your Birthday? \n";
    cout << "Month:";
    cin >> Month;
    cout << "Day: ";
    cin >> Day;
    cout << "Year: ";
    cin >> Year;
    
    int LeapYear = Year %4;
    cout << "The value of LeapYear" << LeapYear;
    if (LeapYear == 0) 
    cout << "Nice you're year is a leap year";
    else 
    cout << "Not leap year";


    
    return 0;

}