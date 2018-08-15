#include <iostream>
#include <string>

using namespace std;

bool stringHasAllUniqueCharacters(std::string str) {
    if (str.length() > 128) return false;

    bool charMap[128] = {false};

    for (std::size_t i = 0; i < str.length(); ++i) {
        char c = str[i];
        if (charMap[c]) return false;
        else charMap[c] = true;
    }
    return true;
}

int main()
{
    std::string a = "";
    std::string b = "aaa";

    std::cout << stringHasAllUniqueCharacters(a) << std::endl;
    std::cout << stringHasAllUniqueCharacters(b) << std::endl;

    return 0;
}
