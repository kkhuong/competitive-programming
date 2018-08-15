#include <cstdio>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    int N, a, b, c, C=0;
    array<int, 3> xs;

    scanf("%d\n", &N);
    while (N--) {
        scanf("%d %d %d\n", &a, &b, &c);
        xs[0]=a,xs[1]=b,xs[2]=c;
        sort(xs.begin(), xs.end());
        printf("Case %d: %d\n", ++C, xs[1]);
    }

}
