#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<vector<ll>> m(n, vector<ll>(n));
        for(ll i = 0; i < n; i++)
            for(ll j = 0; j < n; j++)
                cin >> m[i][j];
        if(n == 1){ cout << "YES\n0\n"; continue; }
        vector<ll> a(n, (1LL << 30) - 1);
        for(ll i = 0; i < n; i++)
            for(ll j = 0; j < n; j++)
                if(i != j) a[i] &= m[i][j];
        bool ok = true;
        for(ll i = 0; i < n && ok; i++)
            for(ll j = 0; j < n && ok; j++)
                if(i != j && (a[i] | a[j]) != m[i][j]) ok = false;
        if(!ok){ cout << "NO\n"; continue; }
        cout << "YES\n";
        for(ll i = 0; i < n; i++) cout << a[i] << " \n"[i == n - 1];
    }
    return 0;
}
