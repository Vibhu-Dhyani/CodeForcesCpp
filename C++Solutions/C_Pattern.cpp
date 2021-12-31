#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int N;
	cin>>N;;
	vector <string> vst (N);
	for (int i = 0; i <N; i ++)
	{
		cin >> vst [i];
	}
	string ans;
	for (int j = 0; j <(int) vst [0] .size (); j ++)
	{
		bool allX = true;
		char x = vst [0] [j];
		for (int i = 1; i <(int) vst.size (); i ++)
		{
			if (x == '?')
			{
				x = vst [i] [j];
			}
			else if (vst [i] [j] != '?' && vst [i] [j] != x)
			{
				allX = false;
				x = '?';
				break;
			}
		}
		if (allX && x == '?') ans.push_back ('x');
		
		else ans.push_back (x);
	}
	cout << ans;
	return 0;
}