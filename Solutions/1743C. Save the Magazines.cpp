#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll ans = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] == '1'){
                ll sum = 0, mn = 1e9;
                ll start = i;
                if(start > 0){
                    sum += a[start-1];
                    mn = min(mn, a[start-1]);
                }
                while(i < n && s[i] == '1'){
                    sum += a[i];
                    mn = min(mn, a[i]);
                    i++;
                }
                i--;
                if(start > 0) ans += sum - mn;
                else ans += sum;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
