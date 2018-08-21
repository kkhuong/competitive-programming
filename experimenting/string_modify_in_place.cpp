#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "This is a good sample string";
    //str[4] = string("()");   // does not work

    // "equivalent" to the lines below but inefficient
    //str.erase(4, 1);
    //str.insert(4, "()");


    // slightly better, but really messy and there is possibly an edge case i did not catch
    //string toInsert = "()";
    //str[4] = toInsert[0];
    //str.insert(4+1, toInsert.substr(1));


    // Superior
    //str.replace(4, 1, "()");   // actually might be werid to understand
    str.replace(str.begin() + 4, str.begin() + 4 + 1, "()"); // tedious but easy to understand

    std::cout << str << std::endl;
}
