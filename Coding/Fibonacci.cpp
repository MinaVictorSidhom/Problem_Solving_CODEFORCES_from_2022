#include <iostream>
using namespace std;

int fibonacci(int number) {
    if (number <= 1)
        return number;

    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl; // Only one cout statement
    return 0;
}
