#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter An Integer: " << '\n';

    float num{};
    cin >> num;

    cout << "Double of " << num << " is: " << num * 2 << '\n';
    cout << "Triple of " << num << " is: " << num * 3 << '\n';
    cout << "Half of " << num << " is: " << num / 2 << '\n';

    return 0;
}