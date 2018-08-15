#include <cstdio>
using namespace std;

int main() {
    int N, a, b;

    scanf("%d\n", &N);
    while (N--) {
        scanf("%d %d\n", &a, &b);
        printf("%c\n", (a==b) ? ('=') : (  (a < b) ? '<' : '>'       ));
    }
    return 0;
}
