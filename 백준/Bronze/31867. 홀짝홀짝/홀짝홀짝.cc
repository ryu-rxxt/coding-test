#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <string>
using namespace std;

int main() { 
	fastio();
	int N, cnt = 0;
	cin >> N;
	string K;
	cin >> K;
	
	for (int i = 0; i < N; i++)
	{
		if ((K[i] - '0') & 1 )
			cnt++;
		else
			cnt--;
	}
	cout << (cnt ? (cnt > 0) : -1);
}
