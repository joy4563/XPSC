int search(string pat, string txt)
{
    int szp = pat.size(), szt = txt.size();
    vector<int> patv(26, 0);
    vector<int> curv(26, 0);
    int l = 0, r = 0, ans = 0;
    if (szt < szp)
        return 0;
    for (auto ch : pat)
        patv[ch - 'a']++;

    while (r < szt)
    {
        curv[txt[r] - 'a']++;
        if (r - l + 1 == szp)
        {
            if (patv == curv)
            {
                ans++;
                // cout<<l<<" "<<r<<endl;
            }

            curv[txt[l] - 'a']--;
            l++;
        }
        r++;
    }

    return ans;
}