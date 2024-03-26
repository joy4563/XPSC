#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int N;
        string S;
        cin >> N >> S;
        int mn = 0, s = 0;
        for (char c : S)
        {
            s += (c == '(' ? 1 : -1);
            mn = min(mn, s);
        }
        int ans = max(0, -mn);
        cout << ans << endl;
    }

    return 0;
}