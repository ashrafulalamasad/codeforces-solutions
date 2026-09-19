#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, best = 0, found = 0; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i]; a[i]--;
        }
        vector<vector<char>> able(n, vector<char>(n, 0));
        for(ll i = 0; i < n; i++){
            vector<ll> used(n, 0);
            ll mn = a[i], mx = a[i];
            for(ll j = i; j < n; j++){
                if(used[a[j]]) break;
                used[a[j]] = 1;
                mn = min(mn, a[j]);
                mx = max(mx, a[j]);
                if(mx - mn == j - i){
                    able[mn][mx] = 1;
                }
            }
        }
        for(ll ans = n; ans > 0; ans--){
            for(ll i = 0; i + 2 * ans <= n; i++){
                if(able[i][i + ans - 1] && able[i + ans][i + 2 * ans - 1]){
                    found = 1;
                    break;
                }
            }
            if(found){
                best = ans;
                break;
            }
        }
        cout << best << endl;
    }
    return 0;
}
