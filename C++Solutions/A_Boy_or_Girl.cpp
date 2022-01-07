#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n = s.length();
    map<char,int> m;

    int res=0;
    for(int i = 0 ; i < n ; i++)
    {
        if(m.find(s[i])==m.end())
        {
            res++;
            m[s[i]] = 1;
        }

    }
    if(res%2==1) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";


    return 0;
}