#include <iostream>
#include <string>

using namespace std;

int main() {
    string name {}, lastName {};
    int age {};
    cout << "What is your name? ";
    cin >> name ; 
    cout << "What is your last name? \n" ;
    cin >> lastName;
    cout << "Hello " << name << " " << lastName << "!" << '\n';
    cin >> age;
    cout << "You are " << age << " years old." << '\n';
    string fullName = name + " " + lastName;
    cout << "Your full name is " << fullName << '\n';
    cout << fullName << "You Are "  << age << " years old." << '\n';
    return 0;
}
