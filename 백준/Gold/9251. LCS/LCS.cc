#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    fastio();
    string a, b;
    cin >> a >> b;
    vector<vector<int>> dp(a.length() + 1, vector<int> (b.length() + 1, 0));
    for (int i = 1; i <= a.length(); i++)
        for (int j = 1; j <= b.length(); j++) {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    cout << dp[a.length()][b.length()];
}