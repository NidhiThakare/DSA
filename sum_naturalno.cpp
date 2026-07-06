#include <iostream>
using namespace std;

int sum_natural(int num){
    int sum = 0;
    for(int i = 0; i <= num ;i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    int num;
    cout << "Enter a no to for the sum of natural numbers: ";
    cin >> num;

    cout << "Sum = " << sum_natural(num) << endl;
}