#include <cctype>
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character to check if it is an alphabet: ";
    cin >> ch;
    
    if(isalpha(ch)){
        cout << ch << " is an alphabet." << endl;
    }
    else{
        cout << ch << " is not an alphabet." << endl;
    }
    return 0;
}

