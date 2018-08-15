#include <iostream>
#include <vector>
#include <limits>
#include <queue>
#include <algorithm>

#define NEGINFINITY std::numeric_limits<int>::min()

using namespace std;

tuple<int, int, int> find_max_crossover_subarray(const vector<int> &xs, int lo, int mid, int hi) {
    int lsum, rsum;
    lsum = rsum = NEGINFINITY;
    int lptr, rptr;

    // find the A[i..mid] max
    int sum = 0;
    for (int i = mid; i >= lo; --i) {
        sum += xs[i];
        if (sum > lsum) {
            lsum = sum;
            lptr = i;
        }
    }

    // find the A[mid+1..j] max
    sum = 0;
    for (int j = mid + 1; j <= hi; ++j) {
        sum += xs[j];
        if (sum > rsum) {
            rsum = sum;
            rptr = j;
        }
    }

    return {rsum+lsum, lptr, rptr};
}

tuple<int, int, int> find_max_subarray(const vector<int> &xs, int lo, int hi) {
    if (lo >= hi) return {xs[lo], lo, hi};

    int mid = lo + (hi - lo)/2;

    auto l = find_max_subarray(xs, lo, mid);
    auto r = find_max_subarray(xs, mid + 1, hi);
    auto c = find_max_crossover_subarray(xs, lo, mid, hi);

    return max({l, r, c});
}

vector<int> max_subarray(const vector<int> &xs) {
    auto ret = find_max_subarray(xs, 0, xs.size()-1);
    return vector<int>(xs.cbegin() + get<1>(ret), xs.cbegin() + get<2>(ret) + 1);
}

int main() {
    vector<int> xs = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
    priority_queue<int, vector<int>, greater<int>> pq(xs.cbegin(), xs.cend());
    priority_queue<int> mpq(xs.cbegin(), xs.cend(), std::greater<int>);
    vector<int> xneg = {-2,-1,-4,-3};
    auto ret = max_subarray(xs);
    for (int e : ret)
        cout << e << endl;
    return EXIT_SUCCESS;
}
