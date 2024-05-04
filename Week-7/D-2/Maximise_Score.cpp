#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define yes cout << "YES" \
                 << "\n"
#define no cout << "NO" \
                << "\n"
#define nl cout << "\n";

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        v.pb(abs(arr[0] - arr[1]));
        v.pb(abs(arr[n - 1] - arr[n - 2]));
        for (int j = 1; j < n - 1; j++)
        {
            v.pb(max(abs(arr[j] - arr[j + 1]), abs(arr[j] - arr[j - 1])));
        }
        sort(v.begin(), v.end());
        cout << v[0];
        nl;
    }

    return 0;
}