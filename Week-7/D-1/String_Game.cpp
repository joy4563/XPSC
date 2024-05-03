#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, one = 0, zero = 0;
        string str;
        cin >> n >> str;

        for (char ch : str)
        {
            if (ch == '0')
                zero++;
            else
                one++;
        }
        int pr = min(zero, one);
        if (pr % 2 == 0)
            cout << "Ramos" << endl;
        else
            cout << "Zlatan" << endl;
    }

    return 0;
}