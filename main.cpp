#include "tutorial2.h"

using namespace std;

int main()
{
    int input;
    map<int, function<void()>> question;
    question[1] = q1;
    question[2] = q2;
    question[3] = q3;
    question[4] = q4;
    question[5] = q5;
    question[6] = q6;
    question[7] = q7;

    cout << "Enter question number (1-7):\n";
    cin >> input;
    cin.ignore();

    if (question.find(input) != question.end())
        question[input]();
    else
        cout << "Invalid input!" << endl;
}
