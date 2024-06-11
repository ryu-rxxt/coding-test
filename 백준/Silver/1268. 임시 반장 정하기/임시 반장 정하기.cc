#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
using namespace std;

int main() { 
	fastio();
	int N;	cin >> N;
	vector<int> room(5), frd(N, 0);
	vector<vector<int>> data(N, room);
	
	for (int i = 0; i < N; i++)
		for (int j = 0; j < 5; j++)
			cin >> data[i][j];
	
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				if(!(data[i][k] - data[j][k]))
				{
					frd[i]++; frd[j]++;
					break;
				}
			}
		}
	}

	int max = 0, idx = 0;
	for (int i = 0; i < N; i++)
	{
		if (max < frd[i])
		{
			max = frd[i];
			idx = i;
		}
	}
	cout << idx + 1;
}
