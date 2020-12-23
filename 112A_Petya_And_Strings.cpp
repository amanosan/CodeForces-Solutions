#include <bits/stdc++.h>
using namespace std;

int petyaAndStrings(string str1, string str2)
{
    for (int i = 0; i < str1.size(); i++)
    {
        if (tolower(str1[i]) < tolower(str2[i]))
            return -1;
        else if (tolower(str1[i]) > tolower(str2[i]))
            return 1;
    }
    return 0;
}

int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    cout << petyaAndStrings(str1, str2) << endl;
    return 0;
}