#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, a, b, c, C=0;
    vector<int> xs;

    scanf("%d\n", &N);
    while (N--) {
        scanf("%d %d %d\n", &a, &b, &c);
        xs = {a,b,c};
        sort(xs.begin(), xs.end());
        printf("Case %d: %d\n", ++C, xs[1]);
    }

}
