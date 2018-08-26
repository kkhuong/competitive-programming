#include <cstdio>
#include <vector>

using namespace std;

int main() {

    int K, n;
    bool first = true;
    vector<int> xs;
    xs.reserve(1000000);


    while(scanf("%d", &K) && K != 0) {
        xs.clear();
        if (!first) printf("\n");
        else first = false;


        // Get the numbers
        for (int i = 0; i < K; ++i) {
            scanf("%d", &n);
            xs.push_back(n);
        }

        // Subsets are {xs[a], xs[b], xs[c], xs[d], xs[e], xs[f]}
        for (int a = 0; a < K-5; ++a)
            for (int b = a+1; b < K-4; ++b)
                for (int c = b+1; c < K-3; ++c)
                    for (int d = c+1; d < K-2; ++d)
                        for (int e = d+1; e < K-1; ++e)
                            for (int f = e+1; f < K; ++f)
                                printf("%d %d %d %d %d %d\n", xs[a], xs[b], xs[c], xs[d], xs[e], xs[f]);

    }
    return EXIT_SUCCESS;
}
