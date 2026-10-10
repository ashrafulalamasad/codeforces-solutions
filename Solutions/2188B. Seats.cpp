#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s;
        s = '1' + s + '1';
        ll ans = 0, l = 0;
        for(ll i = 1; i <= n; i++){
            if(s[i] == '0'){
                if(s[i - 1] == '1') l = i;
                if(s[i + 1] == '1'){
                    ll c = (l == 1) + (i == n);
                    ans += (i - l + 1 + c) / 3;
                }
            }else ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
