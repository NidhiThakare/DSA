#include <iostream>
using namespace std;

int main(){
    int a = 54, b = 33;

    while (b != 0){
        int temp = b; 
        b = a % b; 
        a = temp; 
    }

    cout << "GCD = " << a;

    return 0;
}