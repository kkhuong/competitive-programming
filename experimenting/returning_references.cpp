#include<iostream>

char& f(char* p) {
    (*p) = 'X';
    return *p;
}

int main() {
    char letter = 'a';
    f(&letter) = 'M';
    std::cout << letter << std::endl;
    return 0;
}
