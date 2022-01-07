#include<bits/stdc++.h>
using namespace std;
int main()
{//solve separately for vertical n horizontal
    long long tt;
    cin>>tt;
    while (tt--)
    {
        long long w,h ;
        cin>>w>>h;
        long long ind = 0 ;
        long long maxLocal , maxGlobal=INT_MIN;
        long long hor,ver,horind,verind;
        for(long long i = 0 ; i < 4  ; i ++)
        {
            long long n ; 
            cin>>n;
            vector<long long> points(n);
            for(long long j= 0 ; j  < n ; j ++)
            {
                cin>>points[j];
            }
            maxLocal = points[n-1] - points[0];
            if(maxLocal > maxGlobal) {maxGlobal = maxLocal;}
            if(i==1) {hor=maxGlobal;horind=i;maxGlobal=INT_MIN;}
            else if(i==3) {ver=maxGlobal;verind=i;}


        }
        if((hor*h)>(ver*w) ) {cout<<hor*h;}
        else cout<<ver*w;
        //cout<<hor<<ver;
        cout<<"\n";
    }
    

    return 0;
}