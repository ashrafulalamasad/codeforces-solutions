#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll q; cin >> q;
    while(q--){
        ll n; cin >> n; vector<ll> t(n);
        bool all_eq = true;
        for(ll i = 0; i < n; i++){
            cin >> t[i];
            if(i > 0 && t[i] != t[0]){
                all_eq = false;
            }
        }
        if(all_eq){
            cout << 1 << endl;
            for(ll i = 0; i < n; i++){
                cout << 1 << " ";
            }
            cout << endl;
            continue;
        }
        if(n % 2 == 0){
            cout << 2 << endl;
            ll cur = 1;
            for(ll i = 0; i < n; i++){
                cout << cur << " ";
                cur = 3 - cur;
            }
            cout << endl;
            continue;
        }
        ll idx = -1;
        for(ll i = 0; i < n - 1; i++){
            if(t[i] == t[i + 1]){
                idx = i;
                break;
            }
        }
        if(idx != -1){
            cout << 2 << endl;
            ll cur = 1;
            for(ll i = 0; i <= idx; i++){
                cout << cur << " ";
                cur = 3 - cur;
            }
            cout << (3 - cur) << " ";
            for(ll i = idx + 2; i < n; i++){
                cout << cur << " ";
                cur = 3 - cur;
            }
            cout << endl;
        }else{
            if(t[n - 1] == t[0]){
                cout << 2 << endl;
                ll cur = 1;
                for(ll i = 0; i < n; i++){
                    cout << cur << " ";
                    cur = 3 - cur;
                }
                cout << endl;
            }else{
                cout << 3 << endl;
                ll cur = 1;
                for(ll i = 0; i < n - 1; i++){
                    cout << cur << " ";
                    cur = 3 - cur;
                }
                cout << 3 << " ";
                cout << endl;
            }
        }
    }
    return 0;
}
