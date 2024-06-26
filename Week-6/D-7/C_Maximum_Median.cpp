#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout  << endl;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    sort(v.begin(), v.end());
    v.push_back(2e+9 + 7);

    int cnt = 1, val = v[n / 2];
    for (int i = n / 2 + 1; i < v.size(); ++i)
    {
        int nx = min(v[i], val + k / cnt);

        k -= cnt * (nx - val);
        val = nx;
        ++cnt;

        if (val < v[i])
            break;
    }
    cout << val << endl;
    return 0;
}