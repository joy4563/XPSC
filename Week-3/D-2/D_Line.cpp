#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nl cout << endl;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, initial = 0;
        cin >> n;
        string str;
        cin >> str;
        vector<ll> v;
        for (int j = 0; j < n; j++)
        {
            if (str[j] == 'L')
            {
                if (j < n / 2)
                    v.pb(n - j - 1);
                initial += j;
                cout << j << " ";
            }
            else
            {
                if (j > n / 2)
                    v.pb(j);
                initial += (n - j - 1);
                cout << n - j-1 << " ";
            }
        }
        cout << " = " << initial;
        nl;
        for (int x : v)
            cout << x << " ";
        nl;
        nl;
    }

    return 0;
}