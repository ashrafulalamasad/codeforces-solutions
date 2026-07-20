#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n; string s; cin >> n >> s;
        vector<ll>pos;
        for(ll i=0; i<n; i++) if(s[i]=='*') pos.push_back(i);
        if(pos.empty()){cout<<0<<endl;continue;}
        ll m = pos.size();
        ll mid = m/2;
        ll median_pos = pos[mid];
        ll base = median_pos-mid;
        ll ans = 0;
        for(ll i=0; i<m; i++) ans+=llabs(pos[i]-(base+i));
        cout << ans << endl;
    }
    return 0;
}
