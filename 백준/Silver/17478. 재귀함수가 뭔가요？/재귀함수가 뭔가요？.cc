#define fastio() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#include <iostream>
#include <string>
using namespace std;

void print(int n, int count) {
    string a, b, c, d, e, f, g, indent;
    a = "\"재귀함수가 뭔가요?\"";
    b = "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.";
    c = "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.";
    d = "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"";
    e = "\"재귀함수는 자기 자신을 호출하는 함수라네\"";
    f = "라고 답변하였지.";
    g = "";
    indent = "____";
    
    for (int i = 0; i < count; i++)
        g += indent;
    
    if (n > 0) {
        cout << g << a << "\n" << g << b << "\n" << g << c << "\n" << g << d << "\n";
        print(n - 1, count + 1);
        cout << g << f << "\n";
    }

    else
        cout << g << a << "\n" << g << e << "\n" << g << f << "\n";
}

int main() {
    fastio();
    int N, count = 0;
    cin >> N;
    
    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << "\n";
    print(N, count);
}