#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
using namespace std;

int main() {
    fastio();
    int n, r;
    cin >> n;
    vector<int> vp(2), vn(2);
    vp[0] = 0, vp[1] = 1;
    vn[0] = 0, vn[1] = 1;
    if (n > 1) {
        for (int i = 2; i <= n; i++)
            vp.push_back((vp[i - 1] + vp[i - 2]) % 1000000000);
        r = vp[n];
    }
    else if (abs(n) <= 1)
        r = abs(n);
    else {
        for (int i = 1; i < abs(n); i++)
            vn.push_back((vn[i - 1] - vn[i]) % 1000000000);
        r = vn[abs(n)];
    }

    if (r > 0)
        cout << 1 << "\n" << r;
    else if (r == 0)
        cout << 0 << "\n" << 0;
    else
        cout << -1 << "\n" << abs(r);
}