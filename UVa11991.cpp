#include <vector>
#include <unordered_map>
#include <cstdio>

std::unordered_map<int, int> ixFirst;
std::vector<int> ixNext;


// Returns the index of the k-th occurrence of element e
int ixK(int k, int e) {
    if (ixFirst.find(e) == ixFirst.end()) return -1;

    int current_ix = ixFirst[e];
    int occurrence = 1;



    while (occurrence != k && current_ix != -1) {
        ++occurrence;
        current_ix = ixNext[current_ix];
    }

    return current_ix;
}


int main() {
    // Variable Declaration
    int n, m;
    int k, v, tmp;
    std::unordered_map<int, int> ixCurr;
    std::vector<int> orig;
    scanf("%d %d\n", &n, &m);

    // Gather Data
    ixNext.resize(n, -1);
    while (n--) {
        scanf("%d", &tmp);
        orig.push_back(tmp);
    }



    // setup
    for (int i = 0; i < orig.size(); ++i) {
        if (ixFirst.find(orig[i]) == ixFirst.end())
            ixFirst.insert({orig[i], i});
        else
            ixNext[ixCurr[orig[i]]] = i;

        ixNext[i] = -1;
        ixCurr[orig[i]] = i;
    }

    // BY NOW WE SHOULD HAVE ixNext to be used

    // Deal with Quieries
    while (m--) {
        scanf("%d %d\n", &k, &v);
        printf("%d\n", ixK(k, v)+1);
    }
}
