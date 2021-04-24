#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ff first
#define ss second
#define vi vector<int>
#define mii map<int, int>
#define pii pair<int, int>
#define psi pair<string, int>
#define pb push_back
#define mp make_pair
#define mod 1000000007 // 1e9 + 7
#define ps(x, y) fixed << setprecision(y) << x

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2050 != 0)
        {
            cout << "-1" << endl;
            continue;
        }
        else
        {
            n /= 2050;
            int ans = 0;
            while (n)
            {
                ans += n % 10;
                n /= 10;
            }
            cout << ans << endl;
        }
    }
    return 0;
}