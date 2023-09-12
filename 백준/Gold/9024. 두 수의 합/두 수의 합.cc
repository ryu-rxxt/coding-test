#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	fastio();
	int t, n, K;
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		cin >> n >> K;
		vector<int> test(n,0);
		for (int j = 0; j < n; j++)
			cin >> test[j];
		sort(test.begin(), test.end());
		int count = 0, s = 0, e = n - 1;
		int min_error = abs(test[s] + test[e] - K);
		while (s < e)
		{
			int delta = test[s] + test[e] - K;
			if (abs(delta) == min_error)
				count++;
			else if (abs(delta) < min_error)
			{
				min_error = abs(delta);
				count = 1;
			}
			
			if (delta > 0)
				e--;	
			else
				s++;
		}
		cout << count << '\n';
	}
}