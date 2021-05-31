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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

/*******************************************/

void solve()
{
    string s;
    cin >> s;
    int upper = 0;
    int lower = 0;

    for (auto c : s)
    {
        if (c >= 64 and c <= 90)
            upper++;
        else
            lower++;
    }
    if (upper > lower)
    {
        for (auto c : s)
        {
            if (c >= 64 and c <= 90)
                cout << c;
            else
                cout << char(c - 32);
        }
    }
    else
    {
        for (auto c : s)
        {
            if (c >= 64 and c <= 90)
                cout << char(c + 32);
            else
                cout << c;
        }
    }
}

int32_t main()
{
    solve();
    return 0;
}