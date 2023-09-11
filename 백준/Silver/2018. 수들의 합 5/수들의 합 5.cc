#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
using namespace std;

int main() {
	fastio();
	int N, answer = 1, sum = 1;
	cin >> N;
	
	int start = 1, end = 1;
	while (end != N && start <= end)
	{		
		if (sum == N)
		{
			answer++;
			end++;
			sum += end;
		}
		
		else if (sum < N)
		{
			end++;
			sum += end;
		}
		
		else
		{
			sum -= start;
			start++;
		}
	}
	cout << answer;
}