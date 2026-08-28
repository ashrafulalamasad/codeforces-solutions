#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, f, k; cin >> n >> f >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll v = a[f - 1], bigger = 0, same = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] > v) bigger++;
            else if(a[i] == v) same++;
        }
        if(bigger + same <= k){
            cout << "YES" << endl;
        }else if(bigger + 1 > k){
            cout << "NO" << endl;
        }else{
            cout << "MAYBE" << endl;
        }
    }
    return 0;
}
