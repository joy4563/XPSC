#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    vector<long long> v(n);
    unordered_set<long long> elements;

    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
        elements.insert(v[i]);
    }

    for (long long i = 0; i < k; i++)
    {
        long long x;
        cin >> x;
        if (elements.count(x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
