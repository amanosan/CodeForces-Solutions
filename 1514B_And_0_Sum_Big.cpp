#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 1e9 + 7;

int pw(int n, int k, int m = MOD)
{
    int res = 1;
    while (k > 0)
    {
        if (k & 1)
            res = res * n % m;
        n = n * n % m;
        k >>= 1;
    }
    return res;
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << pw(n, k) << endl;
    }
    return 0;
}