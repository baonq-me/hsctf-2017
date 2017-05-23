#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 9;

vector <int> primes;

void initialize(void) {
    for (int i = 2; i < 9 * 400; ++i) {
        int flag = 1;
        for (int j = 2; j * j <= i; ++j) if (i % j == 0) flag = 0;
        if (flag) primes.push_back(i);
    }
}

long long solve(int N) {
    vector <vector <long long> > f(N + 1, vector <long long> (9 * N + 1, 0));
    f[0][0] = 1;
    for (int i = 1; i <= N; ++i) for (int j = 0; j <= 9 * i; ++j) for (int k = 0; k <= j && k < 10; ++k) f[i][j] = (f[i][j] + f[i-1][j-k]) % mod;
    long long ans = 0;
    for (auto x: primes) if (x < 9 * N) ans = (ans + f[N][x]) % mod;
    return ans;
}

int main(void) {
    initialize();
    cout << (solve(400) - solve(20) + mod) % mod << endl;
}
