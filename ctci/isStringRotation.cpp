#include <iostream>
#include <string>

// Check if s1 is substring of s2
bool isSubstring(std::string s1, std::string s2) {
    return s2.find(s1) != std::string::npos;
}


// Check if s1 is a rotation of s2
bool isStringRotation(std::string s1, std::string s2) {
    if (s1.length() != s2.length()) return false;

    std::string s1s1 = s1 + s1;  // runtime of O(s1)
    return isSubstring(s2, s1s1);
}


int main()
{
    std::string a = "waterbottle";
    std::string b = "erbottlewat";
    std::string c = "erbottlewao";
    std::string d = "";
    std::cout << isStringRotation(a, b) << std::endl;
    std::cout << isStringRotation(b, c) << std::endl;
    std::cout << isStringRotation(d, d) << std::endl;
    return 0;
}
