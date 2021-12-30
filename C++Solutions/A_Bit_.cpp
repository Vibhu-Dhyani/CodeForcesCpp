#include<bits/stdc++.h>

using namespace std;

int main() {
        int x = 0;
        int n;
        cin >> n;
        vector < string > v;
        string t;
        for (int i = 0; i < n; i++) {
                cin >> t;
                v.push_back(t);
        }

        for (int i = 0; i < n; i++) {
                if (v[i][1] == '+') {
                        x++;
                } else {
                        x--;
                }
        }
        cout << x;

        return 0;
}