#include<bits/stdc++.h>

using namespace std;

int main() {
        
        vector<vector<int>> vec;

        int n = 5;
        int step = 0;
        int t = 0;
        int r , c;
        for(int i = 0 ; i < n ; i++)
        {
            vector<int> v;
            for(int j = 0 ; j < n ;j++)
            {
                cin>>t;
                v.push_back(t);
            }
            vec.push_back(v);
        }

        

        for(int i = 0 ; i< n ;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(vec[i][j]==1)
                {
                    r=i;
                    c=j;
                    break;
                }
            }
        }
        
        if(r>2)
            step =step+(r-2);        
        else if(r<2)
            step =step+(2-r);
        if(c>2)
            step =step+(c-2);
        else if(c<2)
            step =step+(2-c);
       
        cout<<step;
        return 0;
}