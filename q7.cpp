#include "tutorial2.h"

void q7()
{
    string id, name, birth, input;
    double height, weight;

    cout << "***Welcome to the Department of Electrical Engineering***" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "Please enter the following details:" << endl;

    cout << "Student ID: ";
    getline(cin, id);

    cout << "Name: ";
    getline(cin, name);

    cout << "Date of Birth: ";
    getline(cin, birth);

    cout << "Height(cm): ";
    cin >> height;

    cout << "Weight(kg): ";
    cin >> weight;

    cout << "Your name is " << name << " (" << id << ") and you were born on " << birth << ". ";
    cout << "Your height is " << height << " cm and your weight is " << weight << " kg." << endl;
}
