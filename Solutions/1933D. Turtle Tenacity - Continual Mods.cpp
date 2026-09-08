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
        ll m = *min_element(a.begin(), a.end());
        ll cnt = 0, ok = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] == m) cnt++;
            if(a[i] % m != 0) ok = 1;
        }
        if(cnt == 1 || ok){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
