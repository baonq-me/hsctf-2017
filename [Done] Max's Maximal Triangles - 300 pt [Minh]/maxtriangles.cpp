#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long n) {
    for (long long i = 2; i * i <= n; ++i) if (n % i == 0) return 0;
    return 1;
}

long long solve(long long n) {
    long long a = 0;
    if (n & 1) a = 3 * n * n - 3 * n + 1;
    else a = 3 * n * n - 6 * n + 6;
    if (isPrime(n)) return a;

    for (int l = 1; l < n / 2; ++l)
        for (int k = 1; k < n / 2; ++k)
            for (int j = 1; j < n / 2; ++j)
                if ((n - k) * l * j == k * (n - l) * (n - j)) a -= 6;
    return a;
}

int main(void) {
    cout << solve(100) << solve(1000) << solve(1000000007) << solve(1000000009) << endl;
}
