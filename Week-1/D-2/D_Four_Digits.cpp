#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, ans;
    cin >> str;
    int ln = str.size();

    for (int i = 0; i < 4 - ln; i++)
    {
        ans += "0";
    }
    cout << ans + str << endl;

    return 0;
}