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
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        if(n == 2){
            cout << -1 << endl;
            continue;
        }
        vector<vector<ll>> a(n, vector<ll>(n));
        ll cur = 1;
        ll lim = n * n;
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                a[i][j] = cur;
                cur += 2;
                if(cur > lim) cur = 2;
            }
        }
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                if(j) cout << " ";
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
