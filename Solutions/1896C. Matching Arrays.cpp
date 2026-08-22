#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x; cin >> n >> x;
        vector<pair<ll, ll>> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        vector<ll> b(n);
        for(ll i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        bool ok = true;
        for(ll i = 0; i < x; i++){
            if(a[n - x + i].first <= b[i]){
                ok = false;
                break;
            }
        }
        if(ok){
            for(ll i = 0; i < n - x; i++){
                if(a[i].first > b[x + i]){
                    ok = false;
                    break;
                }
            }
        }
        
        if(!ok){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            vector<ll> ans(n);
            for(ll i = 0; i < x; i++){
                ans[a[n - x + i].second] = b[i];
            }
            for(ll i = 0; i < n - x; i++){
                ans[a[i].second] = b[x + i];
            }
            for(ll i = 0; i < n; i++){
                cout << ans[i] << (i == n - 1 ? "" : " ");
            }
            cout << endl;
        }
    }
    return 0;
}
