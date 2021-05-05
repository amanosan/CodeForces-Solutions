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
#define MOD 1000000007 // 1e9 + 7
#define ps(x, y) fixed << setprecision(y) << x

int count_digits(int x)
{
    int tmp = 0, ans = 0;
    int n = log10(x) + 1;

    for (int i = 0; i < n; i++)
    {
        tmp = tmp * 10 + 1;

        for (int j = 1; j <= 9; j++)
        {
            if (1 <= (tmp * j) and (tmp * j) <= x)
                ans++;
        }
    }
    return ans;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n < 10)
        {
            cout << n << endl;
        }
        else
            cout << count_digits(n) << endl;
    }
    return 0;
}