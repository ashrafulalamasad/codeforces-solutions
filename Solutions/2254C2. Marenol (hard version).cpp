#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        string a, b; cin >> a >> b;
        vector<ll> a0, a1, b0, b1;
        for(ll i = 0; i < n; i++){
            if(a[i] == '1'){
                if(i % 2 == 0) a0.push_back(i);
                else a1.push_back(i);
            }
            if(b[i] == '1'){
                if(i % 2 == 0) b0.push_back(i);
                else b1.push_back(i);
            }
        }
        if(a0.size() != b0.size() || a1.size() != b1.size()){
            cout << -1 << endl;
        }else{
            ll ans = 0;
            for(ll j = 0; j < (ll)a0.size(); j++) ans += abs(a0[j] - b0[j]);
            for(ll j = 0; j < (ll)a1.size(); j++) ans += abs(a1[j] - b1[j]);
            cout << ans / 2 << endl;
        }
    }
    return 0;
}
