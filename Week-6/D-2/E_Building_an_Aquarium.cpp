#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool solve( vector<ll> &a, int n, ll m ,int  x)
{
    ll sum=0;
    for(int i=0;i<n;i++){
      if(a[i]<m)
      sum+=m-a[i];
    }
    return sum<=x;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<ll>a(n);

        for(int i=0;i<n;i++)cin>>a[i];

        ll l=0,r=INT_MAX,ans=0,m;
        while(l<=r)
        {
            m=(r-l)/2+l;
            if(solve(a,n,m,x))
            {
                ans=m;
                l=m+1;
            }
            else r=m-1;
        }

        cout<<ans<<"\n";
    }
}