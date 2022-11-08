#include <bits/stdc++.h>
using namespace std;

int m,n;
char arr[25][25];
bool check[25][25];
char true_land;

int bfs(int x, int y) {
    int ans = 0;
    queue<pair<int,int>> que; // (x,y)
    pair<int,int> pa;
    pa.first = x; pa.second = y;
    que.push(pa);
    while (!que.empty()) {
        x = que.front().first;
        y = que.front().second;
        cout << x << " " << y << "\n";
        if ((arr[x+1][y] == true_land) && (check[x+1][y] == 0)) {
            pa.first = x+1; pa.second = y;
            check[x+1][y] = 1;
            que.push(pa);
        }
        if ((arr[x-1][y] == true_land) && (check[x-1][y] == 0)) {
            pa.first = x-1; pa.second = y;
            check[x-1][y] = 1;
            que.push(pa);
        }
        if ((arr[x][y+1] == true_land) && (check[x][y+1] == 0)) {
            pa.first = x; pa.second = y+1;
            check[x][y+1] = 1;
            que.push(pa);
        }
        if ((arr[x][y-1] == true_land) && (check[x][y-1] == 0)) {
            pa.first = x; pa.second = y-1;
            check[x][y-1] = 1;
            que.push(pa);
        }
        if (y == 1) {
            if ((arr[x][n-1] == true_land) && (check[x][n-1] == 0)) {
                pa.first = x; pa.second = n-1;
                check[x][n-1] = 1;
                que.push(pa);
            }
        }
        if (y == m-1) {
            if ((arr[x][1] == true_land) && (check[x][1] == 0)) {
                pa.first = x; pa.second = 1;
                check[x][1] = 1;
                que.push(pa);
            }
        }

        que.pop();
        ans++;
    }
    return ans;
}

int main() {
    while (cin >> m >> n) {
        memset(check, 0, sizeof(check));
        memset(arr, '0', sizeof(arr));
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> arr[i][j];
            }
        }

        
        int x,y, mx = 0;
        cin >> x >> y;
        x++; y++;
        true_land = arr[x][y];
        check[x][y] = 1;
        bfs(x,y); // 居住當前土地先排除

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if ((arr[i][j] == 'l') && (check[i][j] == 0)) {
                    check[i][j] = 1;
                    mx = max(bfs(i,j), mx);
                }
            }
        }
        cout << mx << "\n";
    }
}