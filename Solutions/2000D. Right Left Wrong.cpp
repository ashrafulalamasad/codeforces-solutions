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
        for(ll i = 0; i < n; i++) cin >> a[i];
        string s; cin >> s; vector<ll> pre(n + 1, 0);
        for(ll i = 0; i < n; i++) pre[i + 1] = pre[i] + a[i];
        ll ans = 0, l = 0, r = n - 1;
        while(l < r){
            if(s[l] == 'L' && s[r] == 'R'){
                ans += pre[r + 1] - pre[l];
                l++; r--;
            }else if(s[l] != 'L'){
                l++;
            }else{
                r--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
