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
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        vector<int> v1(n), v2(n);
        for (int j = 0; j < n; j++)
        {
            cin >> v1[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> v2[j];
        }
        int diff = v1[0] - v2[0], flag = 1;
        for (int j = 0; j < n; j++)
        {
            int x = v1[j] - v2[j];
            if (v2[j] == 0)
                continue;
            if (x != diff || x < 0)
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