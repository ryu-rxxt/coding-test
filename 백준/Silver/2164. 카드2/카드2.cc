#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <queue>
using namespace std;

int main() {
	fastio();
	int N, count = 0;
	cin >> N;
	queue<int> q;
	
	for (int i = 0; i < N; i++)
		q.push(i + 1);
	
	while (q.front() != q.back())
	{
		if (count % 2 != 0)
			q.push(q.front());
		
		q.pop();
		count++;
	}
	cout << q.front();
}