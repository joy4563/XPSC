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
        ll a[n], s = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                one++;
            s += (a[i] - 1);
        }
        if (s < one || n == 1)
            no;
        else
            yes;
    }

    return 0;
}