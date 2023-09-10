#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
using namespace std;

int main() {
	fastio();
	int N, M;
	long answer = 0;
	cin >> N >> M;
	vector<long> sum(N, 0);
	vector<long> rem(M, 0);
	
	cin >> sum[0];
	for (int i = 1; i < N; i++)
	{
		int a;
		cin >> a;
		sum[i] += sum[i - 1] + a;
	}
	
	for (int i = 0; i < N; i++)
	{
		int remainder = sum[i] % M;
		if (remainder == 0)
			answer++;
			
		rem[remainder]++;
	}
	
	for (int i = 0; i < M; i++)
	{
		if (rem[i] > 1)
			answer += (rem[i] * (rem[i] - 1) / 2);
	}
	cout << answer;
}