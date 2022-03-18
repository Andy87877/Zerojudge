// https://zerojudge.tw/ShowProblem?problemid=a012
#include <iostream>
#define int long long
using namespace std;

signed main() {
    int a, b;
    while(cin >> a >> b) {
        if (a > b) {
            cout << a-b << endl;
        } else {
            cout << b-a << endl;
        }
    }
    
}
