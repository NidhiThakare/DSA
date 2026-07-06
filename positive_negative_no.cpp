//Write a C++ Program to Check Whether a Number is a Positive or Negative Number.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number to check whether it is + or - :";
    cin >> num;

    if(num > 0){
        cout << num << " is a positive number." << endl;
    }
    else{
        cout << num << " is a negative number." << endl;
    }
    return 0;
}
