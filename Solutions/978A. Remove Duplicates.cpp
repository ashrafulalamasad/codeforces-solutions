#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    set<ll> seen; vector<ll> res;
    for(ll i = n - 1; i >= 0; i--){
        if(seen.find(a[i]) == seen.end()){
            seen.insert(a[i]);
            res.push_back(a[i]);
        }
    }
    reverse(res.begin(), res.end());
    cout << res.size() << endl;
    for(ll i = 0; i < (ll)res.size(); i++){
        if(i > 0) cout << " ";
        cout << res[i];
    }
    cout << endl;
    return 0;
}
