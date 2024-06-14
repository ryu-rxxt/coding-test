#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() { 
	fastio();
	vector<pair<string, string>> profile;
	string name;
	int age, weight;

	while (true)
	{
		cin >> name >> age >> weight;
		if (name == "#" && age == 0 && weight == 0)
			break;

		if (age > 17 || weight >= 80)
			profile.push_back({name, "Senior"});
		else
			profile.push_back({name, "Junior"});
	}

	for (int i = 0; i < profile.size(); i++)
		cout << profile[i].first << " " << profile[i].second << endl;
}