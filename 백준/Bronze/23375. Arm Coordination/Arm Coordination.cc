#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
using namespace std;

int main() { 
	fastio();
	int x, y, r;
	cin >> x >> y >> r;
	
	cout << x - r << " " << y + r << endl;
	cout << x + r << " " << y + r << endl;
	cout << x + r << " " << y - r << endl;
	cout << x - r << " " << y - r;
}
