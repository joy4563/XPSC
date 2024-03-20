#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long od = 0, ev = 0;
    cin >> n;
    vector<int> even, odd;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x % 2 == 0)
        {
            ev += x;
        }
        else
        {
            od += x;
            odd.push_back(x);
        }
        }
    if (od % 2 == 0)
        cout << ev + od << endl;
    else
    {
        if (od != 0)
        {
            sort(odd.begin(), odd.end());
            od -= odd[0];
            cout << ev + od << endl;
        }
    }

    return 0;
}