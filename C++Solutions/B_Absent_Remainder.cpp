#include<bits/stdc++.h>
typedef long long ll;

bool desc(int a , int b)
{
    return a>b;
}

using namespace  std;
int main()
{
    ll tt;

    cin>>tt;

    while(tt--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);

        for(ll i = 0   ; i < n ; i ++)
        {
            cin>>a[i];
        }

        sort(a.begin(),a.end(),desc);

        ll k = n/2;

        vector<pair<ll,ll>> ans;
        ll i = 0 , j = n-1;
        while(k && i<j)
        {
            ans.push_back(make_pair(a[i],a[j]));
            k--;
            i++;
            
        }
        
        for(ll i = 0   ; i < ans.size() ; i ++)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<"\n";
        }
        
    }

    return 0;
}