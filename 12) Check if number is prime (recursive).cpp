#include <bits/stdc++.h>
using namespace std;

bool isPrimeHelper(int n, int i) {
    if (i * i > n)
        return true;
    if (n % i == 0)
    return false;
    return isPrimeHelper(n, i + 1);
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    return isPrimeHelper(n, 2);
}

int main() {
    int n;
    cin >> n;
    cout << (isPrime(n) ? "Prime" : "Not Prime");
    return 0;
}

