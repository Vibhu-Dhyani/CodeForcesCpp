#include<bits/stdc++.h>
using namespace std;

int _findMax(vector<int> vec , int n)
{
    int m = vec[0];

    for(int i = 1 ; i < n ; i ++)
    {
        if(vec[i]>m) m=vec[i]; 
    }
    return  m;

}

int main()
{
    int tt;
    cin>>tt;

    while(tt--)
    {
        long long n;
        cin>>n;
        vector<long long> vec(n);
        map<long long , long long> counts;
        for(long long i = 0 ; i < n ; i ++)
        {
            cin>>vec[i];
            counts.insert(pair<long long,long long>(vec[i],0));
        }
        
        //find max
        
         
        
        //count

        for(long long i = 0 ; i < n ; i++)
        {
            if(vec[i]<0) vec[i]*=(-1);
            counts[vec[i]]++;
        }

        long long c = 0 ; 
        for(auto i = counts.begin() ; i!=counts.end() ; i++)
        {
            if(i->first==0 ) c++;
            else{
            
            if(i->second==1) c+=1;
            else if(i->second >=2) c+=2;
            }
        }
        cout<<c<<endl;
    }




    return 0;
}