#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (mp[x] == 1)
                cnt++;
            mp[x]++;
        }

        int single = (mp.size() - cnt);
        int totalDuplicate = n - single;
        int fromdDuplicate;
        // if (totalDuplicate % 2 == 0)
        //     // int ans = single + (totalDuplicate / cnt);

        //     // if (totalDuplicate % 2 == 0)
        //     //     ans = ;
        //     if (cnt == 1 && totalDuplicate % 2 == 0)
        //         cnt = 0;
        cout << i << "  =  " << mp.size() << " " << cnt << " " << single << " " << totalDuplicate << " " << endl;
        // cout << ((totalDuplicate % 2 == 0) ? single + cnt : abs(single + cnt - 1)) << endl;
    }

    return 0;
}