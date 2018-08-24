#include <iostream>
#include <cstdio>
#include <bitset>
#include <string>

using namespace std;

int main() {

    int N;
    cin >> N;
    cin.ignore();




    while (N--) {



        string s;
        bitset<256> hasNeighbor;
        int a, e, v;
        a = e = v = 0;



        while (getline(cin, s) && s[0] != '*') {
            int fst = s[1] - 'A';
            int snd = s[3] - 'A';
            hasNeighbor.set(fst);
            hasNeighbor.set(snd);
            ++e;
        }

    
        getline(cin, s);
        for (int i = 0; i < s.size(); i += 2) {
            int u = s[i] - 'A';
            if (!hasNeighbor.test(u)) ++a;
            ++v;
        }


        cout << "There are " << (v-e-a) << " tree(s) and " << (a) << " acorn(s)." << endl;

    }



}
