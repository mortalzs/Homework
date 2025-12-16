#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int n = 1;
    for (int i = 0; i < r; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < c; j++) cout << n++ << " ";
        } else {
            int start = n + c - 1;
            for (int j = 0; j < c; j++) cout << start-- << " ";
            n += c;
        }
        cout << endl;
    }
    return 0;
}
