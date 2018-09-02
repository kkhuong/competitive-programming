#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std::placeholders;

template <typename T>
void print(const std::vector<T> &xs) {
    for (const T &e: xs)
        std:: cout << e << ' ';
    std::cout << std::endl;

}

int main() {
    std::vector<int> xs = {0,1,2,3,4,5,6,7,8};
    print(xs);

    int a = std::count_if(xs.cbegin(), xs.cend(),
                std::bind(std::greater<int>(), _1, 1024));

    std::cout << a << std::endl;





    
}
