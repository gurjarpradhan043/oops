//To Find Prime Number  From 1 to 100
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {  
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int primes[100], count = 0;

    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            primes[count++] = i;
        }
    }

    cout << "Prime numbers from 1 to 100: \n";
    for (int i = 0; i < count; i++) {
        cout << primes[i] << " ";
    }

    cout << endl;
    return 0;
}
