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

bool checkDigits(int year)
{
    int thousands = year / 1000;
    int hund = year / 100 % 10;
    int tens = year / 10 % 10;
    int ones = year % 10;

    if (thousands != hund and thousands != tens and thousands != ones and hund != tens and hund != ones and tens != ones)
        return 1;
    else
        return 0;
}

void solve()
{
    int year;
    cin >> year;

    for (int i = year + 1; true; i++)
    {
        if (checkDigits(i))
        {
            cout << i << "\n";
            break;
        }
    }
}

int32_t main()
{
    solve();
    return 0;
}