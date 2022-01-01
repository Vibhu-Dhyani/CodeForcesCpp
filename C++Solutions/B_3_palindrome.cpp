#include<bits/stdc++.h>

using namespace std;
//6 /5 --- ababa

int main()
{

    long int n ;
    cin>>n;


    string result = "";

    string ideal = "aabbaabb";

    int l = ideal.length();
    int r;
    r=n/l;
    int t=r;
    while(r)
    {
        
        result=result+ideal;
        r--;

    }
    n=n-(t*l);
    if(n<=l)
    {
        for(int i=0;i<n;i++)
        {
            result=result+ideal[i];
        }
    }
    

    cout<<result;

    return 0;
}