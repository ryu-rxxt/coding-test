#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <deque>
using namespace std;
typedef pair<int, int> Node;

int main() {
	fastio();
	int N, L;
	cin >> N >> L;
	deque<Node> D;
	
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		
		while (D.size() > 0 && D.back().second > num)
			D.pop_back();
			
		D.push_back(Node(i, num));
		
		if (D.front().first < i - L + 1)
			D.pop_front();
		cout << D.front().second << ' ';
	}
}