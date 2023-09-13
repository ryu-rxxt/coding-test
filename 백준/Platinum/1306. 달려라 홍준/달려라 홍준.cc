#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <deque>
using namespace std;
typedef pair<int, int> Node;

int main() {
	fastio();
	int N, M;
	int course;
	cin >> N >> M;
	deque<Node> lumen;
	
	for (int i = 0; i < N; i++)
	{
		cin >> course;
		while (lumen.size() > 0 && lumen.back().second < course)
			lumen.pop_back();
		lumen.push_back(Node(i, course));
		if (lumen.front().first < i - 2 * M + 2)
			lumen.pop_front();
		
		if (i >= 2 * M - 2)
			cout << lumen.front().second << ' ';
	}
}