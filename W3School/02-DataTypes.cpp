#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "Baymax";
    int a {5};
    int b ;
    int age {20};
    float height {1.94};
    double weight {99.5};
    char gender {'M'};
    bool isStudent {true};
    cout << "Welcome to C++ " << name << '\n';
    cout << "Name: " << name << '\n';
    cout << "Age: " << age << '\n';
    cout << "Height: " << height << '\n';
    cout << "Weight: " << weight << '\n';
    cout << "Gender: " << gender << '\n';
    cout << "Is Student: " << isStudent << '\n';
    cout << sizeof(b) << '\n';
    return 0;
}