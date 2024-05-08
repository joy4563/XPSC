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
        vector<int> v1(n), v2(n);

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v1[j] = x + 1;
        }
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v2[j] = x;
        }
        int flag = 1;
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        for (int j = 0; j < n; j++)
        {
            int diff = v1[j] - v2[j];
            if (diff == 1 || diff == 0)
                continue;
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            yes;
        else
            no;
    }

    return 0;
}