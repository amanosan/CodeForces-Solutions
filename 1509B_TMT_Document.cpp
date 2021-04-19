#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        int t = 0, m = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'T')
                t++;
            else
                m++;
        }

        if (t != 2 * m)
        {
            cout << "NO" << endl;
        }
        else
        {
            int flag = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'T')
                    count++;
                else
                    count--;
                if (count < 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                cout << "NO" << endl;
            else
            {
                reverse(s.begin(), s.end());
                flag = 0;
                count = 0;
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] == 'T')
                        count++;
                    else
                        count--;
                    if (count < 0)
                    {
                        flag = 1;
                        break;
                    }
                }

                if (flag)
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }
        }
    }
    return 0;
}