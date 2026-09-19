#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, l, r; cin >> n >> l >> r; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll len = r - l + 1;
        vector<ll> pref(a.begin(), a.begin() + r);
        sort(pref.begin(), pref.end());
        ll sumPref = 0;
        for(ll i = 0; i < len; i++) sumPref = sumPref + pref[i];
        vector<ll> suff(a.begin() + l - 1, a.end());
        sort(suff.begin(), suff.end());
        ll sumSuff = 0;
        for(ll i = 0; i < len; i++) sumSuff = sumSuff + suff[i];
        if(sumPref < sumSuff) cout << sumPref << endl;
        else cout << sumSuff << endl;
    }
    return 0;
}
