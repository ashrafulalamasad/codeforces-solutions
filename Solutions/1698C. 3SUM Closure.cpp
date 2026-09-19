#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, zero = 0; cin >> n; vector<ll> a(n), b;
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll pos = 0, neg = 0;
        for(ll i = 0; i < n; i++){
            if(a[i] > 0) pos++;
            if(a[i] < 0) neg++;
        }
        if(pos > 2 || neg > 2) cout << "NO" << endl;
        else{
            for(ll i = 0; i < n; i++){
                if(a[i] == 0 && zero < 3){
                    b.push_back(a[i]); zero++;
                }
                if(a[i] != 0) b.push_back(a[i]);
            }
            set<ll> s(a.begin(), a.end());
            ll m = b.size(), ok = 1;
            for(ll i = 0; i < m; i++){
                for(ll j = i + 1; j < m; j++){
                    for(ll k = j + 1; k < m; k++){
                        ll sum = b[i] + b[j] + b[k];
                        if(s.find(sum) == s.end()) ok = 0;
                    }
                }
            }
            if(ok == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
