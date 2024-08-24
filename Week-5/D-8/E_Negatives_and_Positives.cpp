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
        ll sum = 0, neg = 0, n, mini = INT64_MAX;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += abs(x);
            if (abs(x) < mini)
                mini = abs(x);
            if (x < 0)
                neg++;
        }

        if (neg % 2 != 0)
            sum -= (2 * mini);

        cout << sum << endl;
    }

    return 0;
}