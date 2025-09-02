#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
using namespace std;

int factorial(int N) {
    if (N <= 1)
        return 1;
    else
        return N * factorial(N - 1);
}

int main() {
    fastio();
    int N, K;
    cin >> N >> K;
    if (K == 0)
        cout << 1;
    
    else {
        float result = factorial(N) / (factorial(K) * factorial(N - K));
        cout << result;
    }
}