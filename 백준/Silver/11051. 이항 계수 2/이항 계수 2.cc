#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
using namespace std;

int main() {
    fastio();
    int N, K;
    cin >> N >> K;
    vector<vector<int>> dp(N + 1);
    for (int i = 1; i <= N; i++)
        dp[i] = vector<int> (i + 1, 1);
    for (int i = 2; i <= N; i++)
        for (int j = 1; j < i; j++)
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
    cout << dp[N][K];
}