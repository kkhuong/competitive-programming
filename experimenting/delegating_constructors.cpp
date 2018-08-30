#include <iostream>
using namespace std;

class Example {
public:
    Example() { cout << "1" << endl; }
    Example(int _a, int _b) : a(_a), b(_b) { cout << "2" << endl; }
    Example(double _c, float _d) : Example(0, 0) { c = _c; d = _d; cout << "3" << endl; }
private:
    int a;
    int b;
    double c;
    float d;
};

int main() {
    Example(0., 0.);


    cout << endl;





    Example(3, 4);
}
