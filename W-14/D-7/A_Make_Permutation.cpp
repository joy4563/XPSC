#include<bits/stdc++.h>
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= (i + 1))
            {
                count++;
            }
        }
        if (count != n)
            no;
            
        else
            yes;
    }

    return 0;
}