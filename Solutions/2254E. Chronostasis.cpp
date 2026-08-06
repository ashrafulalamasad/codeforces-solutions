#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> b(n);
        ll sum = 0;
        for(ll i = 0; i < n; i++){
            cin >> b[i];
            sum += b[i];
        }
        if(sum < 1){
            cout << -1 << endl;
            continue;
        }
        multiset<ll> ms(b.begin(), b.end());
        vector<ll> ans;
        ans.reserve(n);
        ll cur = 0;
        bool ok = true;
        for(ll i = 0; i < n; i++){
            auto it = ms.lower_bound(1 - cur);
            if(it == ms.end()){
                ok = false;
                break;
            }
            cur += *it;
            ans.push_back(cur);
            ms.erase(it);
        }
        if(!ok){
            cout << -1 << endl;
            continue;
        }
        for(ll i = 0; i < n; i++){
            if(i){
                cout << ' ';
            }
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
