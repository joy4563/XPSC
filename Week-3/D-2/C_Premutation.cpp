#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define nl cout << endl;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        int arr[n][n - 1];
        unordered_map<int, int> countMap;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n - 1; k++)
            {
                cin >> arr[j][k];
                if (k == 0)
                    countMap[arr[j][k]]++;
            }
        }
        for (int j = 0; j < n; ++j)
        {
            if (countMap[arr[j][0]] == 1)
            {
                if (j - 1 != -1)
                    cout << arr[j - 1][0] << " ";
                else
                    cout << arr[j + 1][0] << " ";

                for (int k = 0; k < n - 1; k++)
                {
                    cout << arr[j][k] << " ";
                }
                break;
            }
        }

        nl;
    }

    return 0;
}