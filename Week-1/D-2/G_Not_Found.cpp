#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> v(26, 0);

    for (char ch : str)
    {
        v[int(ch) - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] == 0)
        {
            cout << char(i + 97) << endl;
            return 0;
        }
    }
    cout << "None" << endl;

    return 0;
}