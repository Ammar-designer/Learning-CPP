#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    string lastName;
    double M = 6E7;
    cout << M << endl;
    bool isTrue = true;
    bool isFalse = false;
    cout << isTrue << " " << isFalse << endl;
    cout << "What is your name? ";
    cin >> name ; 
    cout << "What is your last name? ";
    cin >> lastName;
    cout << "Hello " << name << " " << lastName << "!" << endl;
    return 0;
}
