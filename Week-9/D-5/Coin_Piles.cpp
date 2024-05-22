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
        int x, y;
        cin >> x >> y;
        if ((x + y) % 3 == 0)
            yes;
        else
            no;
    }

    return 0;
}