#include <iostream>
using namespace std;

bool armstrong(int num){
    //123
    int rem, sum = 0;
    int temp = num;
    while(num != 0){
        rem = num % 10;
        sum = sum + (rem*rem*rem);
        num = num / 10;
    }

    if(temp == sum){
        return true;
    }
    return false;
}

int main(){
    int n = 1;
    bool x = armstrong(n);
    cout << x;
}
