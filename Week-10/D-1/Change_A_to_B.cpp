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
        int a, b, k;
        cin >> a >> b >> k;
        int count = 0;
        while (true)
        {

            if (b / k >= a && b % k == 0)
            {
                b = b / k;
                count++;
            }
            else if (b % k == 0)
            {
                count += b - a;
                break;
            }
            else
            {
                count += b % k;
                b -= (b % k);
            }
        }
        cout << count << endl;
    }

    return 0;
}