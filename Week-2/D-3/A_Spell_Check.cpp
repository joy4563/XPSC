#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        string str, str2 = "Timur";
        cin >> str;
        sort(str.begin(), str.end());
        sort(str2.begin(), str2.end());
        cout << ((str == str2) ? "YES" : "NO") << endl;
    }

    return 0;
}