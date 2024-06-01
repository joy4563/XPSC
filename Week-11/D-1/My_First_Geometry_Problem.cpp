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
        string str;
        int ans = 1, lr = 1, ud = 1;
        bool left = false, right = false, up = false, down = false;
        cin >> str;
        if (str[0] == '1')
            left = true;
        if (str[1] == '1')
            right = true;
        if (str[2] == '1')
            up = true;
        if (str[3] == '1')
            down = true;

        if (left || right)
        {
            if (left && right)
                lr = 21;
            else
                lr = 11;
        }
        if (up || down)
        {
            if (up && down)
                ud = 21;
            else
                ud = 11;
        }
        cout << lr * ud << endl;
    }

    return 0;
}