#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v(4,0);

    string s;
    cin>>s;
    int n = s.length();

    for(int i= 0 ; i < n ; i ++)
    {
        
       if(s[i]=='1')
        {
            v[1]++;
        }
        else if(s[i]=='2')
        {
            v[2]++;
        }
        else if(s[i]=='3'){
            v[3]++;
        }
    }
    string res = "";
    for(int i= 1  ; i < 4 ; i ++)
    {
        while(v[i]--)
        {
            res = res + to_string(i) + "+";
            
        }
    }
    cout<<res.substr(0,n);


    return 0;
}