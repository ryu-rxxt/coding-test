#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
typedef pair<int, int> Node;

int main() {
	fastio();
	int N;
	cin >> N;
	vector<int> NGE(N);
	stack<Node> stack;
	
	for (int i = 0; i < N; i++)
	{
		int A;
		cin >> A;
		while (!stack.empty() && stack.top().second < A)
		{
			NGE[stack.top().first] = A;
			stack.pop();
		}
		stack.push(Node(i, A));
	}
	
	while (!stack.empty())
	{
		NGE[stack.top().first] = -1;
		stack.pop();
	}
	
	for (int i = 0; i < N; i++)
		cout << NGE[i] << ' ';
}