#include <iostream>
using namespace std;

int main() {
    int n, reversed=0, reminder;
    cout << "Enter an integer: ";
    cin >> n;
    int original = n;

    while(n != 0){
        reminder = n % 10;
        reversed = reversed *10 + reminder;
        n /= 10;
    }

    if (original == reversed){
        cout << original << " is a palindrome." << endl;
    }
    else{
        cout << original << " is not a palindrome." << endl;
    }
    return 0;
}
