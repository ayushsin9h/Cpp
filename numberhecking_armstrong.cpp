#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true; // 2 is prime
    if (num % 2 == 0) return false; // Exclude even numbers
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

bool isArmstrong(int num) {
    if (num < 0) return false; // Negative numbers can't be Armstrong
    int original = num, sum = 0, digits = 0;
    while (original) {
        original /= 10;
        digits++;
    }
    original = num;
    while (original) {
        int rem = original % 10;
        sum += pow(rem, digits);
        original /= 10;
    }
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (cin.fail()) {
        cout << "Invalid input. Please enter an integer." << endl;
        return 1; // Exit with error code
    }

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
