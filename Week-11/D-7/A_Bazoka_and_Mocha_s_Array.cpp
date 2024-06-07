#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'
#define nl cout << '\n';

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int &i : vec)
        cin >> i;
    for (int i = 0; i < n; ++i)
    {
        bool ok = true;
        for (int j = 1; j < n; ++j)
        {
            if (vec[(i + j) % n] < vec[(i + j - 1) % n])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            yes;
            return;
        }
    }
    no;
}

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        solve();
    }

    return 0;
}