#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    string s; cin >> s;
    map<string,ll> cnt;
    ll mx = 0;
    string ans = "";
    for(ll i = 0; i < n - 1; i++){
        string sub = s.substr(i, 2);
        cnt[sub]++;
        if(cnt[sub] > mx){
            mx = cnt[sub];
            ans = sub;
        }
    }
    cout << ans << endl;
    return 0;
}
