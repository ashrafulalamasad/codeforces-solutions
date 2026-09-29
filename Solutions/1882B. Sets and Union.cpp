#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; set<ll> total;
        vector<set<ll>> sets(n);
        for(ll i = 0; i < n; i++){
            ll k; cin >> k;
            for(ll j = 0; j < k; j++){
                ll value; cin >> value;
                sets[i].insert(value);
                total.insert(value);
            }
        }
        ll answer = 0;
        for(ll value : total){
            set<ll> current;
            for(ll i = 0; i < n; i++){
                if(!sets[i].count(value)) current.insert(sets[i].begin(), sets[i].end());
            }
            answer = max(answer, (ll) current.size());
        }
        cout << answer << endl;
    }
    return 0;
}
