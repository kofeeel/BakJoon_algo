#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    if (input.empty()) {
        cout << 0 << endl;
        return 0;
    }

    int count = 0;
    bool inWord = false;

    for (char c : input) {
        if (c != ' ' && inWord == false) {
            inWord = true;
            count++;
        }
        else if (c == ' ') {
            inWord = false;
        }
    }

    cout << count << endl;
    return 0;
}