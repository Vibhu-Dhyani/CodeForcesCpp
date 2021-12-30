#include<bits/stdc++.h>
#include <cctype>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    bool flg =true;
    
    for(int i=0;i<a.length();i++)
    {
        if(toupper(a[i])!=toupper(b[i])  )
        {
            if(toupper(a[i])<toupper(b[i]))
            {
                cout<<-1;
                flg=false;
                break;
            }
            else if (toupper(a[i])>toupper(b[i]))
            {
                cout<<1;
                flg=false;
                break;

            }
            
        }
    }

    if(flg==true)
        cout<<0;

    return 0;
}