#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string str = "Nidhi $ Thakare";
    string result;

    for(int i = 0; i < str.length(); i++){
        if(isalpha(str[i])){
            result += str[i];
        }
    }

    cout << "The string with only alphabets is: " << result << endl;
    return 0;
}