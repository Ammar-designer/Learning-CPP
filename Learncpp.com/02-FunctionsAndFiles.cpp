#include <iostream>

using namespace std;

//Value Returning Function
int baz() {
    return 5;
}

//Non-Value Returning Function
void foo() {
    cout << "In foo()" << '\n';
}

//Function Inside a Function
void moo() {
    cout << "Start Of moo()" << '\n';   
    foo();                              //Invokes Function foo()
    cout << "End Of moo()" << '\n';
}

int main() {
    cout << "Start Of main()" << '\n';
    moo();                              //Invokes The Function moo()
    cout << "End Of main()" << '\n';
    //Prints The Value Returned By The Function baz()
    cout << "Value Returned By baz() Is: " << baz() << '\n';
    return EXIT_FAILURE;
}