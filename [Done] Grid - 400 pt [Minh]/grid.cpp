#include <bits/stdc++.h>

using namespace std;

const int mod = 10000;

int N, M, k;
int a[1000][1500];
int f[1000][1500][2];
int g[1000][1500][2];

int count(int x, int y, int m) {
    if (g[x][y][m]) return f[x][y][m];
    g[x][y][m] = 1;
    if (a[x][y]) return f[x][y][m] = 0;
    if (x == 0 && y == 0 && m == 0) return f[x][y][m] = 1;
    if (x) f[x][y][m] = (f[x][y][m] + count(x - 1, y, m)) % mod;
    if (y) f[x][y][m] = (f[x][y][m] + count(x, y - 1, m)) % mod;
    if (m && y < M) f[x][y][m] = (f[x][y][m] + count(x, y + 1, m - 1)) % mod;
    return f[x][y][m];
}

int main(void) {
    cin >> N >> M >> k;
    int x, y;
    for (int i = 0; i < k; ++i) cin >> x >> y, a[x][y] = 1;
    cout << (count(N, M, 0) + count(N, M, 1)) % mod << endl;
}
