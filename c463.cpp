// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// ll n, k, tmp, tmpfront; // tmp現在 tmpfront現在前一個
// ll nodemx, pathtimes;
// ll h[100001]; // 高度
// ll nodenum[100001]; //節點數量
// ll nodecheck[100001]; //當前節點走的數量
// ll nodefront[100001]; //前面一個節點
// ll nodenext[100001]; //下面一個節點(暫時的)
// vector<vector<ll>> relate(100001); // 關係圖 1~n

// int main() {
//     cin >> n;
//     memset(h, -1, sizeof(h));
//     memset(nodecheck, 0, sizeof(nodecheck));

//     for (ll i = 1; i <= n; i++) {
//         cin >> k;
//         nodenum[i] = k;
//         if (k != 0) {
//             vector<ll> tempvec;
//             for (ll j = 0; j < k; j++) {
//                 cin >> tmp;
//                 tempvec.push_back(tmp);
//             }
//             relate[i] = tempvec;
//         } else {
//             h[i] = 0; // 無子節點
//             relate[i] = {};
//         }
//     }

//     for (ll now = 1; now <= n; now++) { // 照順序照點
//         tmp = now;
//         if (h[tmp] == -1) { // 如果還沒用過
//             pathtimes = 0;
//             vector<ll> tempvec; //要處理的
//             for (auto i: relate[tmp]){
//                 nodefront[i] = tmp;
//                 tempvec.push_back(i);
//             }
//             while(tempvec.size() < pathtimes) {
//                 tmp = tempvec[pathtimes];
//                 pathtimes++;
//                 if ((nodecheck[tmp] == nodenum[tmp])) {
//                     nodemx = 0;
//                     if (h[tmp] != 0) {
//                         for (auto i: relate[tmp]){
//                             if ()
//                             nodemx = max(h[i]+1, nodemx);
//                         }
//                     }
//                     h[tmp] = nodemx;
//                 } else {
//                     nodecheck[tmp]++;
//                     for (auto i: relate[tmp]){
//                         nodefront[i] = tmp;
//                         tempvec.push_back(i);
//                     }
//                 }
//                 tempvec.erase(tempvec.begin()); // 排除前面
//             }
//         }
//     }

//     ll ans = -1, mx = -1;
//     for (ll now = 1; now <= n; now++) {
//         cout << now << ":" << h[now] << "\n";
//         if (mx < h[now]){
//             ans = now;
//             mx = h[now];
//         }
//     }
//     cout << ans << "\n" << mx << "\n";

// }