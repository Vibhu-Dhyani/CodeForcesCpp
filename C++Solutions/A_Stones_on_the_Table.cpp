#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    string s;
    cin>>s;

    int answer = 0 ; 

    for(int i = 0 ; i <n-1 ; i ++)
    {
        if(s[i]==s[i+1]) answer++;
    }
    cout<<answer;



    return 0;
}