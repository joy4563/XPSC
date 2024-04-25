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
        string str;
        vector<int> v;
        cin >> str;
        for (char &c : str)
        {
            c = tolower(c);
        }
        string s2 = "";
        for (int i = 0; i < n; i++)
        {
            if (s2.empty() || s2.back() != str[i])
            {
                s2.push_back(str[i]);
            }
        }
        if (s2 == "meow")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}