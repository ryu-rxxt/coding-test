#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
using namespace std;

int main() {
    fastio();
    int A, B, C;
    cin >> A >> B >> C;
    cout << (A + B) % C << "\n" << ((A % C) + (B % C)) % C << "\n" << (A * B) % C << "\n" << ((A % C) * (B % C)) % C;
}