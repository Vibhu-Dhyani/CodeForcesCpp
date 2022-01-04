#include<bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin>>tt;
    while (tt--)
    {
        vector<int> l(3);
        for(int i= 0 ;i<3;i++)
            cin>>l[i];
        bool ok = false;
        for(int i =0 ; i < 3 ;i++ )
        {
            if(l[(i+1)%3] == l[(i+2)%3]) 
            {
                if(l[i]%2==0) ok=true;
            }
            else
            {
                if(l[i]==l[(i+1)%3]+l[(i+2)%3]) ok=true;
            }
        }
        if(ok) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }

return 0;
}