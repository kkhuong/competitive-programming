#include <cstdio>
#include <array>

using namespace std;

const int N = 3;
array<int, N> a;

int main() {
    // setup array
    for (size_t i = 0; i < N; ++i) a[i] = i;

    // get all the subsets
    for (size_t i = 0; i < (1 << N); ++i) {
        printf("{ ");
        for (size_t j = 0; j < N; ++j)
            if (i & (1 << j)) printf("%d ", a[j]);
        printf("}\n");
    }
    return EXIT_SUCCESS;
}
