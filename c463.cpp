// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// ll n, k, tmp, tmpfront; // tmp??��?? tmpfront??��?��??�????
// ll nodemx, pathtimes;
// ll h[100001]; // �?�?
// ll nodenum[100001]; //�?�???��??
// ll nodecheck[100001]; //??��??�?�?走�????��??
// ll nodefront[100001]; //?????��?????�?�?
// ll nodenext[100001]; //�???��?????�?�?(??��?????)
// vector<vector<ll>> relate(100001); // ???�???? 1~n

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
//             h[i] = 0; // ??��??�?�?
//             relate[i] = {};
//         }
//     }

//     for (ll now = 1; now <= n; now++) { // ??��??�???��??
//         tmp = now;
//         if (h[tmp] == -1) { // �???????�???��??
//             pathtimes = 0;
//             vector<ll> tempvec; //�??????????
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
//                 tempvec.erase(tempvec.begin()); // ?????��?????
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