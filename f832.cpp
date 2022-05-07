// https://zerojudge.tw/ShowProblem?problemid=f832
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll N, M, temp; //N 顆隕石 和 M 個隕石捕捉器。
    cin >> N >> M;
    vector<ll> W;
    vector<ll> C;

    for (int i = 0; i < N; i++) {
        cin >> temp;
        W.push_back(temp);
    }

    for (int i = 0; i < M; i++) {
        cin >> temp;
        C.push_back(temp);
    }

    sort(W.rbegin(), W.rend());
    sort(C.rbegin(), C.rend());
    
    ll ans = 0;
    temp = 0;
    for (ll i = 0; i < M; i++) {
        for (ll j = temp; j < N; j++) {
            if (C[i] >= W[j]) {
                ans += W[j];
                temp = j+1;
                break;
            }
        }
    }
    cout << ans << endl;
}
