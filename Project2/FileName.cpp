#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int key=3;

    cout << "Enter text: ";
    getline(cin, text);


    for (char& c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = base + (c - base + key + 26) % 26;
        }
    }

    cout << "Result: " << text << endl;
}