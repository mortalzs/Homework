#include <iostream>
#include <cstring>
using namespace std;

void stringLength() {
    const char* text = "Hello, world!";
    size_t length = strlen(text);
    cout << "String: \"" << text << "\" has length = " << length << endl;
}

int main() {
    stringLength();
    return 0;
}
