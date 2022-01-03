#include<bits/stdc++.h>

using namespace std;


int main()
{

    int tt;
    cin>>tt;

    while(tt--)
    {
        int n , m , sr , sc , tr ,tc;
        cin>>n>>m>>sr>>sc>>tr>>tc;
        
        int flpr=0 ,flpc=0;
        int t= 0 ;
        
      while(1)
        {
            if(sr==tr) break;
            if(sc==tc) break;
            
            if(sr==n ) flpr = 1;
            else if(sr==1) flpr=0;
            if(sc==m) flpc =1;
            else if(sc==1) flpc=0;

            if(flpr == 0) sr++;
            else sr--;
            if(flpc==0) sc++;
            else sc--;
            t++;
            
            
        }

        cout<<t<<"\n";
         

    }



    return 0;
}