#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    int N, n, min, max, tmp;
    cin >> N;

    while (N--) {
        cin >> n;
        min = 100; // infinity
        max = -1;  // -infinity

        for (size_t i = 0; i < n; ++i) {
            cin >> tmp;
            min = std::min(min, tmp);
            max = std::max(max, tmp);
        }

        cout << 2 * (max - min) << endl;
    }
}
