#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, mx = -1;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > mx)
                mx = arr[i];
        }
        if (mx == n)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << mx - n << endl;
        }
    }

    return 0;
}