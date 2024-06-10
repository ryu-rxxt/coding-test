#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() { 
	fastio();
	int N;
	string str;
	cin >> N;
	vector<string> input(N);
	
	for (int i = 0; i < N; i++)
	{
		cin >> input[i];
		if (input[i].find("S") < input[i].size())
			str = input[i];
	}
	cout << str;
}
