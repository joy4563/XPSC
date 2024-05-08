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
        if (n == 1)
            cout << 1 << endl;
        else
        {
            int a[n], s = 0;
            for (int i = 1; i < n; i++)
                a[i] = i + 1, s += a[i];
            int temp = n;
            while (temp <= s)
            {
                temp += n;
                if (temp > s)
                {
                    a[0] = temp - s;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }
    return 0;
}