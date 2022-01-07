#include<bits/stdc++.h>
using namespace std;


bool sortOnValue (pair<char,pair<int,int>> a ,pair<char,pair<int,int>> b)
{
    return a.second.first < b.second.first;

}
bool sortOnIndex (pair<char,pair<int,int>> a ,pair<char,pair<int,int>> b)
{
   
    return a.second.second < b.second.second;
}

int main()
{
    int tt;
    cin>>tt;
    while (tt--)
    {
        int n;
        cin>>n;
        vector<pair<int , int>> v;
        int t;
        for(int i = 0 ; i < n ; i ++)
        {
            cin>>t;
            
            v.push_back(make_pair(t,i));


        }
        string s;
        cin>>s;
        vector<pair<char,pair<int,int>>> p ;

        for(int i = 0 ; i < n ; i ++)
        {
            p.push_back(make_pair(s[i],v[i]));
        }
        
        sort(p.begin(),p.end(),sortOnValue);

        int k = n;

        for(int i = n-1 ; i >= 0 ; i--)
        {
            if(p[i].first=='1')
            {
                p[i].second.first = k;
                k--;
            }
        }
        
        for(int i = n-1 ; i >= 0 ; i--)
        {
            if(p[i].first=='0')
            {
                p[i].second.first = k;
                k--;
            }
        }
        sort(p.begin(),p.end(),sortOnIndex);
        
       for(int i = 0 ; i < n ; i ++)
        {
          cout<<p[i].second.first<<" ";
        }
        
        cout<<"\n";
    }
    


    return 0 ;
}