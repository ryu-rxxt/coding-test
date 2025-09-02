#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
using namespace std;

int main() {
    fastio();
    int X;
    cin >> X;
    cout << __builtin_popcount(X);
}