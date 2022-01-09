#include<bits/stdc++.h>
using namespace std;

bool sortOnValue (pair<long long,pair<long long,long long>> a , pair<long long,pair<long long,long long>> b)
{
    return a.second.second > b.second.second;
}
bool sortOnIndex (pair<long long,pair<long long,long long>> a , pair<long long,pair<long long,long long>> b)
{
    return a.second.first < b.second.first;
}
int main()
{
    long long tt;
    cin>>tt;
    while(tt--)
    {
        long long n;
        cin>>n;

        vector<pair<long long,pair<long long,long long>>> v;

        v.push_back(make_pair(0,make_pair(0,0)));

        long long t;
        for(long long i = 1 ; i <= n ; i ++)
        {
            cin>>t;
            v.push_back(make_pair(0,make_pair(i,t)));
        }
        
        sort(v.begin()+1 , v.end() , sortOnValue);

        long long l = 1;
        long long x = 1;
        while (l<=n)
        {
            /* code */

            if(l%2!=0)
            {
                v[l].first = x;
            }
            else
            {
                v[l].first = -1*x;
                x++;
            }



            l++;
        }
        sort(v.begin()+1,v.end(),sortOnIndex);

        long long sum =0  ;

        for(long long i = 1 ; i <= n ; i ++)
        {
            sum = sum + abs( v[i].first  - 0  ) * v[i].second.second * 2 ;
        }

        cout<<sum<<"\n";
        for(long long i = 0 ; i < n+1 ; i ++)
        {
            cout<<v[i].first<<" ";
        }
        cout<<"\n";

        



    }


    return 0;
}