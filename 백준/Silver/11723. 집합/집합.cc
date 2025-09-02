#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <string>
using namespace std;

int main() {
    fastio();
    int M, x, S = 0;
    string command;
    cin >> M;
    
    for (int i = 0; i < M; i++) {
        cin >> command;
        
        if (command != "all" && command != "empty")
            cin >> x;
        
        if (command == "add")
            S |= (1 << (x - 1));

        else if (command == "remove")
            S &= ~(1 << (x - 1));

        else if (command == "check")
            cout << (S & (1 << (x - 1))? 1 : 0) << "\n";

        else if (command == "toggle")
            S ^= (1 << (x - 1));

        else if (command == "all")
            S = (1 << 20) - 1;

        else if (command == "empty")
            S = 0;
    }
}