#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
using namespace std;

int main() {
    fastio();
    int A, B, C;
    cin >> A >> B >> C;
    
    if (C & 1)
        cout << (A ^ B);

    else
        cout << A;
}