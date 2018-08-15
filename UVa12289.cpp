#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string one = "ONE", two = "TWO", str;
    
    cin >> N;
    while (getline(cin, str)) {
        if (str.size() > 3) { printf("3\n"); continue; }
        
        int diff1 = 0;
        int diff2 = 0;
        for (int i =0;i<3;++i) {
            if (one[i] ^ str[i]) ++diff1;
            if (two[i] ^ str[i]) ++diff2;
        }

        (diff1 == 1) ? printf("1\n") : printf("2\n");
    }
}
