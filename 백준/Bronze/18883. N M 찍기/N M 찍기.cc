#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
using namespace std;

int main() { 
	fastio();
	int N, M;	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M - 1; j++)
			cout << i * M + j + 1 << " ";
		cout << M * (i + 1) << endl;
	}
}