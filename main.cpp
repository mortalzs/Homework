#include <iostream>
using namespace std;

void sumEvenNumbers() {
    int sum = 0;
    for (int i = 2; i <= 10; i += 2)
        sum += i;
    cout << "Sum of even numbers = " << sum << endl;
}

int main() {
    sumEvenNumbers();
    return 0;
}

