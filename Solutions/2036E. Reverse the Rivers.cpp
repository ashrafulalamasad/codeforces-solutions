#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n, k, q; cin >> n >> k >> q;
    vector<vector<ll>> b(n, vector<ll>(k));
    for(ll j = 0; j < k; j++){
        ll val; cin >> val;
        b[0][j] = val;
    }
    for(ll i = 1; i < n; i++){
        for(ll j = 0; j < k; j++){
            ll val; cin >> val;
            b[i][j] = b[i - 1][j] | val;
        }
    }
    while(q--){
        ll m; cin >> m;
        ll lo = 0, hi = n - 1;
        for(ll x = 0; x < m; x++){
            ll r, c; char o; cin >> r >> o >> c;
            r--;
            if(o == '<'){
                ll left = 0, right = n - 1, ans = -1;
                while(left <= right){
                    ll mid = (left + right) / 2;
                    if(b[mid][r] < c){
                        ans = mid;
                        left = mid + 1;
                    }else{
                        right = mid - 1;
                    }
                }
                hi = min(hi, ans);
            }else{
                ll left = 0, right = n - 1, ans = n;
                while(left <= right){
                    ll mid = (left + right) / 2;
                    if(b[mid][r] > c){
                        ans = mid;
                        right = mid - 1;
                    }else{
                        left = mid + 1;
                    }
                }
                lo = max(lo, ans);
            }
        }
        if(lo <= hi && lo < n){
            cout << lo + 1 << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}
