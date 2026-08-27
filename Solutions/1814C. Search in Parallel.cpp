#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, s1, s2; cin >> n >> s1 >> s2;
        vector<pair<ll, ll>> v(n);
        for(ll i = 0; i < n; i++){
            ll r; cin >> r;
            v[i] = {r, i + 1};
        }
        sort(v.rbegin(), v.rend());
        vector<ll> list1, list2;
        ll c1 = 0, c2 = 0;
        for(auto& p : v){
            ll cost1 = s1 * (c1 + 1);
            ll cost2 = s2 * (c2 + 1);
            if(cost1 <= cost2){
                list1.push_back(p.second);
                c1++;
            }else{
                list2.push_back(p.second);
                c2++;
            }
        }
        cout << list1.size();
        for(ll x : list1) cout << " " << x;
        cout << endl;
        cout << list2.size();
        for(ll x : list2) cout << " " << x;
        cout << endl;
    }
    return 0;
}
