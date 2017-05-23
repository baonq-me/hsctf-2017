#include <bits/stdc++.h>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i += 4) cout << char((s[i] - '0') * 64 + (s[i + 1] - '0') * 16 + (s[i + 2] - '0') * 4 + (s[i + 3] - '0'));
}
