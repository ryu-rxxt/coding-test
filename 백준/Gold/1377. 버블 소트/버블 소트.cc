#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	fastio();
	int N;
	cin >> N;
	vector<pair<int, int>> A(N);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i].first;
		A[i].second = i;
	}
	
	sort(A.begin(), A.end());
	int max = 0;
	
	for (int i = 0; i < N; i++)
	{
		if (max < A[i].second - i)
			max = A[i].second - i;
	}
	cout << max + 1;
}