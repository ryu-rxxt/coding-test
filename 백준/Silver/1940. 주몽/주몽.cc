#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	fastio();
	int N, M, count = 0;
	cin >> N >> M;
	
	vector<int> input(N);
	for (int i = 0; i < N; i++)
		cin >> input[i];
		
	sort(input.begin(), input.end());
	
	int i = 0, j = N - 1;
	while (i < j)
	{	
		int num = input[i] + input[j];
		if (num == M)
		{
			count++;
			j--;
			i++;
		}
		
		else if (num < M)
			i++;
		
		else
			j--;
	}
	cout << count;
}