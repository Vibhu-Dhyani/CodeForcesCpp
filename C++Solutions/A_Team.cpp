#include<bits/stdc++.h>
using namespace std;

int sureAnswers(vector<vector<int>> s , int n)
{
    int result = 0;
    int sum=0;
    for(int i =0 ; i < n ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            
            sum =sum + s[i][j];
           if(sum>=2) break;
        }
       
        if(sum>=2) result=result+1;
        sum=0;

    }
    return result;
}

int main()
{
    int n ;
    cin>>n;

    vector<vector<int>> s;
    
    for(int i =0 ; i < n ; i++)
    {
        vector<int> t;
    int k;
        for(int j=0;j<3;j++)
        {
            cin>>k;
            t.push_back(k);
        }
        
        
        s.push_back(t);
        
    }
  

  cout<< sureAnswers(s,n);
   
    

    return 0;
}