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
        ll cnt = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] == 1) cnt++;
        }
        if(2 * cnt >= n){
            cout << "Bessie" << endl;
        }else{
            cout << "Elsie" << endl;
        }
    }
    return 0;
}
