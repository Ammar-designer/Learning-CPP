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

//Function With Parameters And Arguments'
void bar(int a, int b) {
    cout << "a = " << a << '\n';
    cout << "b = " << b << '\n';
    cout << "a + b = " << a + b << '\n';
}

//Functions Can Have Unnamed Parameters
void hi(string ) {
    cout << "Hello World" << '\n';
}

int main() {
    hi("Hello");                        //Invokes The Function hi()
    cout << "Start Of main()" << '\n';
    moo();                              //Invokes The Function moo()
    cout << "End Of main()" << '\n';
    //Prints The Value Returned By The Function baz()
    cout << "Value Returned By baz() Is: " << baz() << '\n';
    bar(5, 10);                         //Invokes The Function bar()
    return 0;
}