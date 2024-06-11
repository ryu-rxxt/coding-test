#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() { 
	fastio();
	int N, cnt = 0;
	string S;
	cin >> N >> S;
	
	for (long long i = 1; i < S.length(); i++)
		if (S.find(S[i]) < i)
		{
			S.erase(i, 1);
			cnt++;
			i--;
		}
	S = to_string(N + 1906) + S + to_string(cnt + 4);
	reverse(S.begin(), S.end());
	cout << "smupc_" + S;
}
