#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    fastio();
    int N, K, W, V;
    cin >> N >> K;
    vector<vector<int>> dp(N + 1, vector<int> (K + 1, 0));
    for (int i = 1; i < N + 1; i++) {
        cin >> W >> V;
        for (int j = 1; j < K + 1; j++) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            if (j >= W)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - W] + V);
        }
    }
    cout << dp[N][K];
}