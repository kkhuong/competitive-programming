#include <bits/stdc++.h>

using namespace std;

int main() {
    string s = "ABCDEFGHIJ";
    do {
    	printf("%s\n", s.c_str());
    } while (next_permutation(s.begin(), s.end()));
    return EXIT_SUCCESS;
}
