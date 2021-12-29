#include  <iostream>
#include<bits/stdc++.h>
using namespace std;

string printTillSapce(string s,int start)
{   
    string res = "";
    int i =start;
    while(s[i]!=' ')
    {
        res=res+s[i];
        i++;
    }
    return res;

}
int main()
{

    

    string t = "Alice Bob Cindy Dani";
    string s;
    getline(cin,s);
    
    int n = s.length();
    string res;
    int flag=0;
    for(int i = 0 ; i < n ; i++)
    {
        if(s[i]!=t[i])
        {
           flag = 1;
           res= printTillSapce(t,i);
           break;
        }
     

    }
       if(flag==0) res="Dani";
    cout<<res;




    return 0;
}