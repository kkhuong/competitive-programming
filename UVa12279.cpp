#include <cstdio>

using namespace std;

int main() {
    int N, tmp, C=0,bal;

    while (scanf("%d\n", &N) != EOF && N) {
        bal=0;
        while (N--) {
            scanf("%d", &tmp);
            (tmp) ? ++bal : --bal;
        }
        printf("Case %d: %d\n", ++C, bal);
    }
}
