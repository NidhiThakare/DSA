#include <iostream>
using namespace std;

bool isEven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num;
    cout << "Enter a number to check whether it is even or odd: ";
    cin >> num;

    if(isEven(num)) {
        cout << num << " is an even number." << endl;
    }
    else {
        cout << num << " is an odd number." << endl;
    }
    return 0;
}