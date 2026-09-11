#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n;
        ll t1 = 1000000005, t2 = 1000000005;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            if(t1 > t2){
                ll tmp = t1;
                t1 = t2;
                t2 = tmp;
            }
            if(x <= t1){
                t1 = x;
            }else if(x <= t2){
                t2 = x;
            }else{
                t1 = x;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
