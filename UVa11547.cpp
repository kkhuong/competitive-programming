#include <cstdio>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    int N, n;
    scanf("%d\n", &N);
    while (N--) {
        scanf("%d\n", &n);
        n = (((((n * 567)/9.)+ 7492)*235)/47.) - 498;
        n %= 100;
        n /= 10;
        printf("%d\n", abs(n));
    }
    return 0;
}
