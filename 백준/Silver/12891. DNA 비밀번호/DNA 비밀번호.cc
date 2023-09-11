#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int check(char C)
{
	switch(C)
	{
		case 'A':
			return 0;
		case 'C':
			return 1;
		case 'G':
			return 2;
		case 'T':
			return 3;
	}
}

bool pw(vector<int> obj, vector<int> cur)
{
	int result = 0;
	for (int i = 0; i < 4; i++)
	{
		if (obj[i] <= cur[i])
			result++;
	}
	if (result == 4)
		return true;
	else
		return false;
}

int main() {
	fastio();
	int S, P, count = 0;
	string DNA;
	cin >> S >> P >> DNA;
	
	vector<int> obj(4, 0);
	vector<int> cur(4, 0);
	for (int i = 0; i < 4; i++)
		cin >> obj[i];
	
	for (int i = 0; i < P; i++)
		cur[check(DNA[i])]++;
	count += pw(obj, cur);
	for (int i = 0; i < S - P; i++)
	{
		cur[check(DNA[i])]--;
		cur[check(DNA[i + P])]++;
		count += pw(obj, cur);
	}
	cout << count;
}