#include <cstdio>
#include <string>
#include <iostream>
using namespace std;


int main() {
    int lang, C=0;
    string str;
    string hello[] = {"ENGLISH", "SPANISH", "GERMAN", "FRENCH", "ITALIAN", "RUSSIAN", "UNKNOWN"};

    while (getline(cin, str)) {
        if (str == "HELLO") lang = 0;
        else if (str == "HOLA") lang = 1;
        else if (str == "HALLO") lang = 2;
        else if (str == "BONJOUR") lang = 3;
        else if (str == "CIAO") lang = 4;
        else if (str == "ZDRAVSTVUJTE") lang = 5;
        else if (str == "#") break;
        else lang = 6;

        cout << "Case " << ++C << ": " << hello[lang] << endl;
    }
    return 0;
}
