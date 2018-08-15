#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> xs = {10,20,30,30,20,10,10,20};
    std::sort(xs.begin(), xs.end());

    auto l33 = std::lower_bound(xs.cbegin(), xs.cend(), 33);
    auto l20 = std::lower_bound(xs.cbegin(), xs.cend(), 20);
    auto l30 = std::lower_bound(xs.cbegin(), xs.cend(), 30);
    auto u33 = std::upper_bound(xs.cbegin(), xs.cend(), 33);
    auto u20 = std::upper_bound(xs.cbegin(), xs.cend(), 20);
    auto u30 = std::upper_bound(xs.cbegin(), xs.cend(), 30);

    std::cout << (xs.end() == l33) << std::endl;
    std::cout << (xs.end() != l20) << std::endl;
    std::cout << (xs.end() != l30) << std::endl;
    std::cout << (xs.end() == u33) << std::endl;
    std::cout << (xs.end() != u20) << std::endl;
    std::cout << (xs.end() == u30) << std::endl;
    std::cout << (std::binary_search(xs.cbegin(), xs.cend(), 20) == 1) << std::endl;
    std::cout << (std::binary_search(xs.cbegin(), xs.cend(), 33) == 0) << std::endl;
}
