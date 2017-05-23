#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;
long long f[8005][8005];

long long cal(int n, int p) {
    long long ret = 0;
    for (int k = 0; n >= p + k && p + p >= k; ++k) ret = (ret + f[n][p + k] * f[p + p][k]) % mod;
    return ret;
}

int main(void) {
    f[0][0] = 1;
    for (int i = 1; i <= 8000; ++i) {
        f[i][0] = 1;
        for (int j = 1; j <= i; ++j) f[i][j] = (f[i-1][j] + f[i-1][j-1]) % mod;
    }
    cout << cal(50, 30) << ' ' << cal(4234, 4000) << ' ' << cal(3000, 1234) << ' ' << cal(2017, 34) << ' ' << cal(4000, 3000) << ' ' << cal(5000, 3000) << endl;
}
