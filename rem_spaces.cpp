#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello my name is world";
    string result;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            result = result + str[i];
        }
    }

    cout << "string without spaces: " << result;

    return 0;
}