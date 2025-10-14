#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    cout << "Введіть число: ";
    cin >> number;

    string strNumber = to_string(number);

    cout << "Рядок: " << strNumber << endl;
    return 0;
}
