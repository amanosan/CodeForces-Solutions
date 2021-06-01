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

bool isPrime(int n)
{
    int flag = 0;
    if (n == 0 or n == 1)
        return 0;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                flag = 1;
            }
        }
    }
    if (flag)
        return 0;
    else
        return 1;
}

/*******************************************/

void solve()
{
    int n, m;
    cin >> n >> m;
    int flag = 0;
    for (int i = n + 1; i <= m; i++)
    {
        if (!isPrime(i) and i == m)
        {
            cout << "NO\n";
            break;
        }
        else if (isPrime(i) and i < m)
        {
            cout << "NO\n";
            break;
        }
        else if (!isPrime(i))
            continue;
        else if (isPrime(i) and i == m)
        {
            cout << "YES\n";
            break;
        }
    }
}

int32_t main()
{
    solve();
    return 0;
}