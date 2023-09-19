#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	fastio();
	string N;
	cin >> N;
	vector<int> A(N.size());
	
	for (int i = 0; i < N.size(); i++)
		A[i] = stoi(N.substr(i,1));
		
	for (int i = 0; i < N.size(); i++)
	{
		int max = i;
		for (int j = i; j < N.size(); j++)
		{
			if (A[max] < A[j])
				max = j;
		}
		if (max != i)
			swap(A[i], A[max]);
	}
	for (int i = 0; i < N.size(); i++)
		cout << A[i];
}