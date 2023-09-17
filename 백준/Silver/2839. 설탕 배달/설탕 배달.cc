#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
using namespace std;

int main() {
	fastio();
	int N, count = 0;
	cin >> N;
	
	if (N >= 15)
	{
		count += N / 5;
		N %= 5;
		
		while (N % 3 != 0)
		{
			N += 5;
			count--;
		}
	}
	
	while (N % 3 != 0)
	{
		N -= 5;
		if (N < 0)
		{
			cout << -1;
			return 0;
		}
		count++;
	}
	count += N / 3;
	cout << count;
}