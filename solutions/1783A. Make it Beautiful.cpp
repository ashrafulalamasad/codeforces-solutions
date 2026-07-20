#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n); map<ll,ll> mp;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        if(mp.size() == 1){
            cout << "NO" << endl;
        }else{
        vector<ll> distinct, duplicate;
        for(auto x : mp){
            distinct.push_back(x.first);
            for(ll i = 2; i <= x.second; i++){
                duplicate.push_back(x.first);
            }
        }
        reverse(distinct.begin(), distinct.end());
        cout << "YES" << endl;
        for(auto x : distinct){
            cout << x << " ";
        }
        for(auto x : duplicate){
            cout << x << " ";
        }
        cout << endl;
        }
    }
    return 0;
}
