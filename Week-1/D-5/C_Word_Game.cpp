#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, a = 0, b = 0, c = 0;
        cin >> n;
        vector<string> s1, s2, s3;
        map<string, int> mp;

        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < n; k++)
            {
                string str;
                cin >> str;
                mp[str]++;
                if (j == 0)
                    s1.push_back(str);
                else if (j == 1)
                    s2.push_back(str);
                else if (j == 2)
                    s3.push_back(str);
            }
        }
        for (string st : s1)
            a += (mp[st] == 1) ? 3 : (mp[st] == 2) ? 1
                                                   : 0;

        for (string st : s2)
            b += (mp[st] == 1) ? 3 : (mp[st] == 2) ? 1
                                                   : 0;

        for (string st : s3)
            c += (mp[st] == 1) ? 3 : (mp[st] == 2) ? 1
                                                   : 0;

        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}