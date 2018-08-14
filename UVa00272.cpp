#include <iostream>
#include <string>

using namespace std;

int main(){
    bool even = true;
    string s;
    while (getline(cin, s)) {
        for (char c : s) {
            if (c == '\"') {
                cout << ((even) ? ("``") : ("''"));
                even = !even;
            } else {
                cout << c;
            }
        }
        if (!cin.eof()) cout << endl;
    }
    return EXIT_SUCCESS;
}
