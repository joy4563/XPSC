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
        int n, mx = -1, mxIdx;
        cin >> n;
        vector<int> v1(n), v2(n);
        for (int j = 0; j < n; j++)
        {
            cin >> v1[j];
            if (mx < v1[j])
            {
                mx = v1[j];
                mxIdx = j;
            }
        }

        for (int j = 0; j < n; j++)
        {
            cin >> v2[j];
        }
        int mxDiff = abs(v1[mxIdx] - v2[mxIdx]), flag = 1;
        for (int j = 0; j < n; j++)
        {
            int x = v1[j] - v2[j];
            if ((v2[j] == 0 && x <= mxDiff))
            {
                continue;
            }
            else if ((x != mxDiff || x < 0))
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