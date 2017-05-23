#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
#define X first
#define Y second

ii origin;
void operator -= (ii &A, ii B){ A.X-=B.X; A.Y-=B.Y; }
bool ccw(ii O, ii A, ii B){ A-=O, B-=O; return A.X*B.Y > A.Y*B.X; }
bool cmp(ii A, ii B){ return ccw(origin, A, B); }

const int mod = 1e9 + 7;
int n;
ii a[12309];

main(){
    int i, t;

    scanf("%d", &n);
    for (i=1; i<=n; i++)
    scanf("%d%d", &a[i].X, &a[i].Y);

    sort(a+1, a+n+1);
    origin = a[1];
    sort(a+2, a+n+1, cmp);
    a[0]=a[n]; a[n+1]=a[1];
    int j=1;
    for (i=1; i<=n+1; i++){ // a[1] and a[n+1] will be both added
        while (j>2 && !ccw(a[j-2], a[j-1], a[i])) j--;
        a[j++]=a[i];
    }
    n=j-2;
    cout << n << endl;
    long long ans = 1;
    for (i=1; i<=n; i++) {
        ans = ans * (a[i].X + mod) % mod;
        ans = ans * (a[i].Y + mod) % mod;
    }
    cout << ans << endl;
}
