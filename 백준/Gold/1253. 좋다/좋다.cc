#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	fastio();
	int N, count = 0;
	cin >> N;
	
	vector<int> input(N);
	for (int i = 0; i < N; i++)
		cin >> input[i];
	sort(input.begin(), input.end());
	
	for (int k = 0; k <N; k++)
	{
		int i = 0, j = N - 1, search = input[k];
		while (i < j)
		{	
			int num = input[i] + input[j];
			if (num == search)
			{
				if (i != k && j != k)
				{
					count++;
					break;
				}
				
				else if (j == k)
					j--;
					
				else if (i == k)
					i++;
			}	
			
			else if (num < search)
				i++;
			
			else
				j--;
		}
	}
	cout << count;
}