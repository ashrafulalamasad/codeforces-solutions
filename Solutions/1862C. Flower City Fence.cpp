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
        if(a[0] != n){
            cout << "NO" << endl;
            continue;
        }
        ll cnt = n; bool ok = true;
        for(ll i = 1; i <= n; i++){
            while(cnt > 0 && a[cnt - 1] < i){
                cnt--;
            }
            if(a[i - 1] != cnt){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
