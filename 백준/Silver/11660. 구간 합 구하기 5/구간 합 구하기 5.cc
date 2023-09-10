#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
using namespace std;

int main() {
	fastio();
	int N, M;
	vector<vector <int>> sum;
	cin >> N >> M;
	
	for (int i = 0; i < N; i++)
	{
		sum.push_back(vector<int> (N));
		sum[i][0] = 0;
		for (int j = 1; j <= N; j++)
		{
			int num;
			cin >> num;
			sum[i][j] = sum[i][j - 1] + num;
		}
	}
	
	for (int i = 0; i < M; i++)
	{
		int x1, y1, x2, y2, result = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int row = x1 - 1; row < x2; row++)
			result += (sum[row][y2] - sum[row][y1 - 1]);
		cout << result << '\n';
	}
}