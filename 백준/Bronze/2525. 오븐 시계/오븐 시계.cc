#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
using namespace std;

int main() {
    fastio();
    int A, B, C;
    cin >> A >> B >> C;
    B += C % 60;
    if (B >= 60) {
        A += 1;
        B %= 60;
    }
    
    A += C / 60;
    if (A >= 24)
        A %= 24;
    
    cout << A << " " << B;
}