#include <iostream>
using namespace std;

int main() {
    cout << "Щасливі квитки:" << endl;

    for (int i = 0; i <= 999999; i++) {
        int a = i / 100000 % 10;
        int b = i / 10000 % 10;
        int c = i / 1000 % 10;
        int d = i / 100 % 10;
        int e = i / 10 % 10;
        int f = i % 10;

        int sum1 = a + b + c;
        int sum2 = d + e + f;

        if (sum1 == sum2) {
            cout << i << endl;
        }
    }

    return 0;
}
