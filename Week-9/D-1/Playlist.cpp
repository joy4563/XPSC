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
    map<int, int> mp;
    for (int t = 0; t < test; t++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    cout << mp.size() << endl;

    return 0;
}