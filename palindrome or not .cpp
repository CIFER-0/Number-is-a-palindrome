#include <iostream>
using namespace std;

int main() {
    long long num, reversed = 0, original;
    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num != 0) {
        long long digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    cout << "Reversed number = " << reversed << endl;

    if (original == reversed) {
        cout << "The number is palindrome." << endl;
    } else {
        cout << "The number is not palindrome." << endl;
    }
}
