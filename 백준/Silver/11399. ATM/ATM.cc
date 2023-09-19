#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	fastio();
	int N, time = 0;
	cin >> N;
	vector<int> P(N);
	
	for (int i = 0; i < N; i++)
		cin >> P[i];
	
	sort(P.begin(), P.end());
	
	for (int i = 0; i < N; i++)
		time += (N - i) * P[i];
		
	cout << time;
}