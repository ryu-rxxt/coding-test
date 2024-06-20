#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
using namespace std;

int main() { 
	fastio();
	int N, S, M, L, XL, XXL, XXXL, T, P, cnt = 0;
	vector<int> size(6);
	cin >> N;
	
	for (int i = 0; i < 6; i++)
		cin >> size[i];
	
	cin >> T >> P;
	
	for (int i = 0; i < 6; i++)
	{
		cnt += size[i]/T;
		if (size[i]%T != 0)
			cnt++;
	}
	
	cout << cnt << endl;
	cout << N/P << ' ' << N%P;
}