#include <bits/stdc++.h>
using namespace std;

string helpfulMaths(string str)
{
    string temp, result;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != '+')
        {
            temp.push_back(str[i]);
        }
    }
    sort(temp.begin(), temp.end());
    for (int i = 0; i < temp.size(); i++)
    {
        result.push_back(temp[i]);
        result.push_back('+');
    }
    result.pop_back();
    return result;
}

int main()
{
    string str;
    getline(cin, str);
    cout << helpfulMaths(str) << endl;
    return 0;
}