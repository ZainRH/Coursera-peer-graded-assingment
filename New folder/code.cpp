#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    int sum = num1 + num2;
    int product = num1 * num2;
    
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
    
    return 0;
}
