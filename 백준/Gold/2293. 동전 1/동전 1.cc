#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
using namespace std;

int main() {
    fastio();
    int n, k, coin;
    cin >> n >> k;
    vector<int> dp(k + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        cin >> coin;
        for (int j = coin; j <= k; j++)
            dp[j] += dp[j - coin];
    }
    cout << dp[k];
}