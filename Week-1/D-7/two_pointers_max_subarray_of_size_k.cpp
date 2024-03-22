long maximumSumSubarray(int K, vector<int> &Arr, int N)
{
    // code here
    long long sum = 0, mx = 0, l = 0, r = 0;

    while (r < N)
    {
        sum += Arr[r];

        if (r - l + 1 == K)
        {
            mx = max(sum, mx);
            sum -= Arr[l];
            l++;
        }
        r++;
    }
    return mx;
}