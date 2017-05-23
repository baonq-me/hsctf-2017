#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

long long solve(int N, int p) {
    long long ans = 1, mul = 1, cur = 1;
    for (int i = 0; i < N; ++i) mul = mul * p % mod;
    for (int i = 0; i < N; ++i) {
        ans = ans * (mul + mod - cur) % mod;
        cur = cur * p % mod;
    }
    return ans;
}

int main(void) {
    cout << solve(2017, 2) << solve(2017, 3) << endl;
}
