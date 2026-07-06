#include <iostream>
using namespace std;

int main(){
    int prime, i, num;
    cout << "Enter a number to check if it is prime or not: ";
    cin >> num;
    prime = 1;
    
    for(i = 2; i <= num/2; i++){
        if(num % i == 0){
            prime = 0;
            break;
        }
    }
    if(prime == 1){
        cout << num << " is a prime number." << endl;
    }
    else{
        cout << num << " is not a prime number." << endl;
    }
}