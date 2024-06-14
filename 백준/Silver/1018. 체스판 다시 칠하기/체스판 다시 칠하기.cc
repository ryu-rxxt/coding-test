#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <string>
using namespace std;

char case1[8][8] =
{{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}};

char case2[8][8] =
{{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}};

int main() { 
	fastio();
	int min = 64;
	int N, M; cin >> N >> M;
	char board[N][M];
	
	for (int i = 0; i < N; i++)
	{
		string line; cin >> line;
		
		for (int j = 0; j < M; j++)
		{
			board[i][j] = line[j];
		}
	}
	
	for (int i = 0; i < N - 7; i++)
	{
		for (int j = 0; j < M - 7; j++)
		{
			int diff1 = 0, diff2 = 0;
			for (int y = 0; y < 8; y++)
			{
				for (int x = 0; x < 8; x++)
				{
					if (board[i+y][j+x] != case1[y][x])
						diff1++;
					if (board[i+y][j+x] != case2[y][x])
						diff2++;
				}
			}
			int diff = diff1 < diff2 ? diff1 : diff2;
			min = min < diff ? min : diff;
		}
	}
	cout << min;
}