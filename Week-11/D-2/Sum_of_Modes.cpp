#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl cout << '\n';

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        string str;
        cin >> str;
        int ans = n * (n + 1) / 2;

        int one = 0, zero = 0;
        mp[0] = 1;
        for (char ch : str)
        {
            if (ch == '0')
                zero++;
            else
                one++;

            if (mp[one - zero])
            {
                ans += mp[one - zero];
            }

            mp[one - zero]++;
        }

        cout << ans << endl;
    }

    return 0;
}