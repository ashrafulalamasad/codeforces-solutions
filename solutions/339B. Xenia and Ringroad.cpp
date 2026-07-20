#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    ll cur = 1, ans = 0;
    for(ll i=0; i<m; i++){
        ll a; cin >> a;
        if(a >= cur){
            ans += a - cur;
        }else{
            ans += n - (cur - a);
        }
        cur = a;
    }
    cout << ans << endl;
    return 0;
}
