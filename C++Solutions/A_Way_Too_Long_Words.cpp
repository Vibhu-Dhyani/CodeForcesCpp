#include<bits/stdc++.h>

using namespace std;

vector<string> abbreviationGenerator (vector<string> s ,int n )
{
    char start,end;
    string result="";
    int countBetween=0;
    for(int i=0;i<n;i++)
    {
        if(s[i].length() > 10)
        {
            start=s[i][0];
            end=s[i][s[i].length()-1];
            countBetween = s[i].length() -2;
            result = start + to_string(countBetween) +end;
            s[i] = result;
        }
        
        
    }
    return s;
}

int main()
{

    int n;
    cin>>n;
    vector<string> s;
    string temp;
    for(int i = 0 ; i < n ; i ++)
    {
        cin>>temp;
        s.push_back(temp);
    }

    s=abbreviationGenerator(s,n);

    for(auto i=0;i<n;i++)
    {
        cout<<s[i]<<"\n";
    }



    return 0;
}