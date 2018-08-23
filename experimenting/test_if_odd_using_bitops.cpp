#include <iostream>

using namespace std;

int main()
{
    cout << (3 & 1) << endl; // it is 1
    cout << (-9 & 1) << endl; // expecting 1
    cout << (-6 & 1) << endl; // expecting 0
}
