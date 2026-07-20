#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n, a, b; cin >> n >> a >> b;
    ll K = n - a - b;
    if(b == 0 && a > 0 && K == 1){
        cout << -1 << endl;
        return 0;
    }
    vector<ll> ans;
    if(b == 0){
        if(a == 0){
            for(ll i=0; i<n; i++) ans.push_back(1);
        }else{
            ans.push_back(1);
            ans.push_back(1);
            ll neutrals_left = K - 2;
            ll sum = 2, mx = 1;
            for(ll i=0; i<a; i++){
                ll val = mx + 1;
                ans.push_back(val);
                mx = val;
                sum += val;
            }
            for(ll i=0; i<neutrals_left; i++) ans.push_back(1);
        }
    }else{
        ans.push_back(1);
        ll neutrals_left = K - 1;
        ll sum = 1, mx = 1;
        for(ll i=0; i<b; i++){
            ll val = sum + 1;
            ans.push_back(val);
            mx = val;
            sum += val;
        }
        for(ll i=0; i<a; i++){
            ll val = mx + 1;
            ans.push_back(val);
            mx = val;
            sum += val;
        }
        for(ll i=0; i<neutrals_left; i++) ans.push_back(1);
    }
    if((ll)ans.size() != n){
        cout << -1 << endl;
        return 0;
    }
    for(ll i=0; i<n; i++){
        if(i) cout << ' ';
        cout << ans[i];
    }
    cout << endl;
    return 0;
}
