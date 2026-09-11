#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; string s; cin >> s;
    ll ans = 0, cnt = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == 'x'){
            cnt++;
            if(cnt >= 3){
                ans++;
            }
        }else{
            cnt = 0;
        }
    }
    cout << ans << endl;
    return 0;
}
