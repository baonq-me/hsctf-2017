#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 3;
long long f[500005][10];
string s;

int main(void) {
    freopen("digit.in", "r", stdin);
    cin >> s;
    f[0][0] = 1;
    for (int i = 0; i < s.size(); ++i) for (int j = 0; j < 9; ++j) f[i+1][j] = (f[i][j] + f[i][(j - s[i] + '0' + 9) % 9]) % mod;
    cout << f[s.size()][5] << endl;
}
