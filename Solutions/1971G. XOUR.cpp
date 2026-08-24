#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        map<ll, vector<ll>> groups;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            groups[a[i] / 4].push_back(a[i]);
        }
        for(auto& p : groups){
            sort(p.second.begin(), p.second.end());
        }
        map<ll, ll> ptr;
        for(ll i = 0; i < n; i++){
            ll key = a[i] / 4;
            cout << groups[key][ptr[key]] << " ";
            ptr[key]++;
        }
        cout << endl;
    }
    return 0;
}
