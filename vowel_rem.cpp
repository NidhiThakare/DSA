#include <iostream>
using namespace std;

int main() {
    string str = "hello world";
    int j = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U') {
            str[j] = str[i];
            j++;
        }
    }

    str.resize(j);

    cout << str;
}