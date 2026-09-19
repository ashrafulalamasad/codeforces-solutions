#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        string s; cin >> s; vector<ll> rem(n);
        ll l = 0, r = n - 1;
        for(ll i = 0; i < n; i++){
            if(s[i] == 'L'){
                rem[i] = a[l];
                l = l + 1;
            }else{
                rem[i] = a[r];
                r = r - 1;
            }
        }
        vector<ll> b(n);
        ll prod = 1 % m;
        for(ll i = n - 1; i >= 0; i--){
            prod = prod * (rem[i] % m) % m;
            b[i] = prod;
        }
        for(ll i = 0; i < n; i++) cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}
