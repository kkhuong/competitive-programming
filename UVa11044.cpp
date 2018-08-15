#include <cstdio>
#include <cmath>

using namespace std;

int main() {

    int N;
    int m, n, r;

    scanf("%d\n", &N);
    while (N--) {
        scanf("%d %d\n", &m, &n);
        r = ceil((m-2) / 3.);
        r *= ceil((n-2)/3.);
        printf("%d\n", r);
    }
    return 0;
}
