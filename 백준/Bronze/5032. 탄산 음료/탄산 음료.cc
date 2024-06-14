#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
using namespace std;

int main() { 
	fastio();
	int cnt = 0;
	int e, f, c;	cin >> e >> f >> c;
	while (true)
	{
		if (e + f < c)
			break;
		cnt += (e + f) / c;
		e = (e + f) / c + (e + f) % c;
		f = 0;
	}
	cout << cnt;
}