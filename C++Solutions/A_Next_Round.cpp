#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k ;
    cin>>n>>k;


    vector<int> v;
    int result= 0 ;
    int t;
    for(int i = 0 ; i< n ; i ++)
    {
        cin>>t;
        v.push_back(t);
    }
    for(int i = 0 ; i< n ; i ++)
    {
        if(v[i]>=v[k-1] && v[i]>0) result++;
    }

    cout<<result;


    return 0;
}