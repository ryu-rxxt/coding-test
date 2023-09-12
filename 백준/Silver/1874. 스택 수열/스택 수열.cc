#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	fastio();
	int n;
	cin >> n;
	stack<int> stack;
	vector<char> order;
	int num = 1;
	
	for (int i = 0; i < n; i++)
	{
		int cur;
		cin >> cur;
		if (cur >= num)
		{
			while (cur >= num)
			{
				stack.push(num);
				order.push_back('+');
				num++;
			}
			stack.pop();
			order.push_back('-');
		}
		else // cur < num
		{
			int alpha = stack.top();
			if (cur == alpha)
			{
				stack.pop();
				order.push_back('-');
			}
			else
			{
				cout << "NO";
				return 0;
			}
		}
	}
	
	for (int i = 0; i < order.size(); i++)
		cout << order[i] << '\n';
}