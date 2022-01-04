#include<bits/stdc++.h>
using namespace std;

int main()
{

    int tt;
    cin>>tt;
    while (tt--)
    {
        int n , k ; 
        cin>>n>>k;
        int t=k;
        int sr=1;
        bool flag = true;
        
        //dist indices with each k
        while(k-- && sr <= n )
        {
            
            sr+=2;
            
        }
        
        if(k>=0) cout<<-1<<endl;
        
        else{
            for(int i =1; i <=n ; i++)
            {
                for(int j = 1 ; j <= n ;j++)
                {
                    if(i!=j) cout<<".";
                    else if(i==j && i%2==1 && t) {cout<<"R";t--;}
                    else cout<<".";
                }
                cout<<"\n";
            }
        }

    }
    

    return 0;
}