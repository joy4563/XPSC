#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v;

        for (int j = 0; j < n; j++)
        {
            string str;
            cin >> str;
            int sum = 0;
            for (char ch : str)
                sum += int(ch - 96);
            v.push_back(sum);
        }
        // sort(v.begin(), v.end());
        for (auto k : v)
            cout << k << " ";
        cout << endl;
        // cout << v[1] - v[0] << endl;
    }

    return 0;
}