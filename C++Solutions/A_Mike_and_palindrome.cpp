#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;

    int l = s.length();
    int t=l;
    if(l%2==0)
    {
        string half1="";
        string half2="";
        int mid = l/2;
        
        for(int i=0,j=mid ; i<mid , j<l ;i++,j++)
        {
            half1=half1+s[i];
            half2=half2+s[j];
        }
        s = half1 +'1'+half2;
    }
    l=s.length();
    int mid = l/2;
    int step=0;

    for(int i = mid-1 , j= mid+1 ; i>=0 , j<l ;i--,j++)
    {
        if(s[i]!=s[j]) 
        {
            step++;
        }
        if(step>1) break;
    }
    if(step<=1 && t%2!=0 ) {cout<<"YES";}
    else if(step==1 && t%2==0) {cout<<"YES";}
    else cout<<"NO";


    return 0;
}