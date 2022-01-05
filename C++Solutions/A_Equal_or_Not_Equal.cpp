#include<bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin>>tt;

    while (tt--)
    {
        string s;
        cin>>s;

        if(count(s.begin(), s.end(), 'N') == 1) cout<<"NO";
        else cout<<"YES";
        cout<<endl;


    }
    


    return 0;
}