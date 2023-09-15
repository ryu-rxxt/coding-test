#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <queue>
using namespace std;

struct compare
{
	bool operator()(int o1, int o2)
	{
		int alpha = abs(o1), beta = abs(o2);
		if (alpha == beta)
			return o1 > o2;
		else
			return alpha > beta;
	}
};

int main() {
	fastio();
	int N;
	cin >> N;
	priority_queue<int, vector<int>, compare> q;
	
	for (int i = 0; i < N; i++)
	{
		int cmd;
		cin >> cmd;
		if (cmd == 0)
	 	{
	 		if (q.empty())
	 			cout << "0\n";
	 		
	 		else
	 		{
	 			cout << q.top() << '\n';
	 			q.pop();
			 }
		}
		
		else
			q.push(cmd);
	}
}