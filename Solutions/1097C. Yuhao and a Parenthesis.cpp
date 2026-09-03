#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    map<ll, ll> openCnt, closeCnt;
    for(ll i = 0; i < n; i++){
        string s; cin >> s;
        ll bal = 0, mn = 0;
        for(ll j = 0; j < (ll)s.size(); j++){
            if(s[j] == '('){
                bal++;
            }else{
                bal--;
            }
            mn = min(mn, bal);
        }
        if(mn >= 0){
            openCnt[bal]++;
        }
        if(mn >= bal){
            closeCnt[bal]++;
        }
    }
    ll ans = 0;
    for(auto& p : openCnt){
        if(p.first == 0){
            ans += p.second / 2;
        }else{
            ans += min(p.second, closeCnt[-p.first]);
        }
    }
    cout << ans << endl;
    return 0;
}
