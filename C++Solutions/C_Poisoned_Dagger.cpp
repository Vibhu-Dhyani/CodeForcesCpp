#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define ld long double
#define ull unsigned long long
#define fint(n) for (int i = 0; i < n; i++)
#define flong(n) for (int i = 0; i < n; i++)

const ll MOD = 1e9 + 7;

/*----HELPER METHODS BEGIN----*/

ll successfulKill(vi &a, int n, ll mid)
{
    ll attack = 0;
    fint(n)
    {
        ll curr = mid;
        if (i < n - 1)
        {
            ll d = a[i + 1] - a[i];
            if (d < mid)
                curr = d;
        }
        attack += curr;
    }

    return attack;
}

/*----HELPER METHODS END----*/

/*----SOLVE METHOD BEGINS----*/

void solve()
{

    int n;
    cin >> n;
    ll h;
    cin >> h;

    vi v(n);

    fint(n)
    {
        cin >> v[i];
    }

    ll l = 1;
    ll u = h;
    ll k = h;
    while (l <= u)
    {
        ll mid = l + (u - l) / 2;
        if (successfulKill(v, n, mid) >= h)
        {
            k = mid;
            u = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << k;

    cout << "\n";
}

/*----SOLVE METHOD ENDS----*/

/*----MAIN METHOD BEGINS----*/

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt;
    cin >> tt;

    while (tt--)
    {
        solve();
    }

    return 0;
}

/*----MAIN METHOD ENDS----*/