#include  <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    

 int  n ;
 cin>>n;

 vector<int> dist(n) , cap(n);

for(int  i = 0 ; i < n ; i ++)
{
    cin>>dist[i];
}

for(int  i = 0 ; i < n ; i ++)
{
    cin>>cap[i];
}
 sort(dist.begin(),dist.end());
 sort(cap.begin(),cap.end());

    int flag=0;
 for(int   i = 0 ; i < n ; i ++)
 {
     if(dist[i]>=cap[i])
     {
         flag = 1;
         break;
     }
 }
 if(flag==1) cout<<"NO";
 else cout<<"YES";
    return 0;
}