#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        map<ll, ll> cnt;
        for(ll i = 0; i < n; i++) cnt[a[i]]++;
        ll ans = 0, prevKey = -2, prevCnt = 0;
        for(auto& p : cnt){
            if(p.first == prevKey + 1){
                if(p.second > prevCnt){
                    ans += p.second - prevCnt;
                }
            }else{
                ans += p.second;
            }
            prevKey = p.first;
            prevCnt = p.second;
        }
        cout << ans << endl;
    }
    return 0;
}
