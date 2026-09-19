#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, sum = 0; cin >> n;
    vector<ll> a(n), ans; map<ll, ll> cnt;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
        sum += a[i];
    }
    for(ll i = 0; i < n; i++){
        ll rest = sum - a[i];
        if(rest % 2 == 0){
            ll need = rest / 2;
            ll have = cnt.count(need) ? cnt[need] : 0;
            if(a[i] == need) have--;
            if(have > 0) ans.push_back(i + 1);
        }
    }
    cout << ans.size() << endl;
    for(ll i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
    return 0;
}
