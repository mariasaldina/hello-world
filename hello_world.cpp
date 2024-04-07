#include <iostream>
using namespace std;

void fib(int n){
    int cur, prev1 = 0, prev2 = 1;
    cout << "fib(1) = 0\nfib(2) = 1\n";
    for (int i = 2; i < n; ++i){
        cur = prev1 + prev2;
        prev1 = prev2;
        prev2 = cur;
        cout << "fib(" << i + 1 << ") = " << cur << "\n";
    }
}

int main(){
    cout << "Hello, World!\n";
    cout << "Enter n: ";
    int n; cin >> n;
    fib(n);
    return 0;
}