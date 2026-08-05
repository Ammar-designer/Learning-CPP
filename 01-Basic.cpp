#include <iostream>
#include <string>

using namespace std;

int main() {
    string name {}, lastName {};
    cout << "What is your name? ";
    cin >> name ; 
    cout << "What is your last name? \n" ;
    cin >> lastName;
    cout << "Hello " << name << " " << lastName << "!" << '\n';
    return 0;
}
