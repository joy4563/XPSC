#include <iostream>
#include <vector>
#include <utility>
#define ll  long long
using namespace std;

vector<ll> arr;
vector<vector<ll>> subsets;

void findSubsets(ll idx, ll target, vector<ll> &current)
{
    if (target == 0)
    {
        if (current.size() == 3)
        {
            subsets.push_back(current);
            return;
        }
    }

    if (idx < 0 || target < 0)
    {
        return;
    }
    if (subsets.size() > 0)
        return;
    findSubsets(idx - 1, target, current);
    if (subsets.size() > 0)
        return;
    current.push_back(idx + 1);

    findSubsets(idx - 1, target - arr[idx], current);
    current.pop_back();
}

int main()
{
    ll n;
    cin >> n;
    ll target;
    cin >> target;
    arr.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<ll> current;
    findSubsets(n - 1, target, current);
    if (subsets.size() > 0)
    {
        for (const auto &subset : subsets)
        {
            if (subset.size() == 3)
            {
                for (const auto &val : subset)
                {
                    cout << val << " ";
                }
                return 0;
            }
        }
    }
    else
        cout << "IMPOSSIBLE" << endl;

    return 0;
}