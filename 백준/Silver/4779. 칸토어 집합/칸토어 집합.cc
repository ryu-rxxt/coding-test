#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

string print(int N, string l) {
    if (N == 0)
        return "-";

    else if (N == 1)
        return "- -";

    else {
        int len = pow(3, N);
        string s(len / 3, ' ');
        l.replace(0, len / 3, print(N - 1, l.substr(0, len / 3)));
        l.replace(len / 3, 2 * len / 3, s);
        l.replace(2 * len / 3, len / 3, print(N - 1, l.substr(2 * len / 3, len / 3)));
        return l;
    }
}

int main() {
    fastio();
    int input;
    vector<int> N;
    string l, result;
    while (cin >> input)
        N.push_back(input);
    
    for (int i = 0; i < N.size(); i++) {
        l.assign(pow(3, N[i]), '-');
        result = print(N[i], l);
        cout << result << "\n";
    }
}