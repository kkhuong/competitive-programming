#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> xs = {0,1,2,3,4,5,6,7,8,9};
	xs.insert(xs.begin() + 5, 3, 42); // at that position and onward is shifted

	for (auto e : xs) cout << e << endl;
}
