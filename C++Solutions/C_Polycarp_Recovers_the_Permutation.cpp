#include<bits/stdc++.h>
typedef long long ll;

using namespace std;



int main()
{
    ll tt;
    cin>>tt;

    while (tt--)
    {
       ll n ; 
       cin>>n;

       vector<ll> v(n);
       for(ll i = 0 ; i < n ; i++)
       {
           cin>>v[i];
       }

       ll m = 0;

       for(ll i = 0 ; i < n ; i ++)
       {
           if(m<v[i]) m=v[i];
       }
        
       if(m != v[0] && m!=v[n-1])
       {
           cout<<-1;
       }
       else{
           int s=0,e=n-1;
           if(m==v[0]) s=1;
           if(m==v[n-1]) e=n-2;  
           for(ll i = e ;i >= s ; i --)
           {
               cout<<v[i]<<" ";
           }
           cout<<m;
       }
       cout<<"\n";
    }
    
    

    return 0;
}
