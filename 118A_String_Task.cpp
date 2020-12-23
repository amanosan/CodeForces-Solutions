#include <bits/stdc++.h>

using namespace std;
#define ll long long

string stringTask(string str)
{
    string result = "";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i')
        {
            continue;
        }
        else
        {
            result.push_back('.');
            result.push_back(str[i]);
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    string str;
    getline(cin, str);
    cout << stringTask(str) << endl;
    return 0;
}