#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
    int t;
    scanf("%d", &t);
    while(t--) {
        // 深度 第幾顆球 答案
        int d, a, ans = 0;
        scanf("%d %d", &d, &a);
        ans = pow(2, d-1);
        for (int i = 1; (a >= (int(pow(2,i-1)))); i++) {
            //cout << (((a/(int(pow(2,i-1))))%2 == 0) && (a >= (int(pow(2,i-1)))));
            if ((a/(int(pow(2,i-1))))%2 == 0) { // 判斷左或右
                ans += pow(2,d-i-1);
            }
        }
        //cout << "\n";
        printf("%d\n", ans);
    }
}