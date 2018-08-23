#include <iostream>
#include <string>
#include <stringstream>

using namespace std;

bool isValidIPv4Block(const string &block) {
    // Check for valid length and characters
    if (block.length() < 1 || block.length() > 3) return false;
    for (auto c : block) if (!isdigit(c)) return false;

    // Check for leading 0
    if (block[0] == '0' && block.length() > 1) return false;    

    // Check if the block is in range [0,255]
    int result = stoi(block);
    return result >= 0 && result <= 255;
}

bool isValidIPv4(const string &ip) {
    istringstream ss(ip);
    string block;

    for (size_t i = 0; i < 4; ++i) {
        if (!getline(ss, block, '.')) return false;
        if (!isValidIPv4Block(block)) return false;
    }

    return ss.eof();
}

bool isValidIPv6Block(const string &block) {
    if (block.length() < 1 || block.length() > 4) return false;
    for (auto c : block) if (!isxdigit(c)) return false;
    return true;
}

bool isValidIPv6(const string &ip) {
    istringstream ss(ip);
    string block;

    for (size_t i = 0; i < 8; ++i) {
        if (!getline(ss, block, ':')) return false;
        if (!isValidIPv6Block(block)) return false;
    }

    return ss.eof();
}

// Returns "IPv4", "IPv6", "Neither"
string validIPAddress(string IP) {
    if (IP.length() > 8*4+7) return "Neither";
    if ((IP.find('.') != string::npos) && isValidIPv4(IP)) return "IPv4";
    if ((IP.find(':') != string::npos) && isValidIPv6(IP)) return "IPv6";
    return "Neither";
}

int main() {
    cout << validIPAddress("") << endl;
}
