#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        if(is_sorted(a.begin(), a.end())) cout << "Bob" << endl;
        else{
            for(ll i = 0; i < n; i++){
                ll x = a[i];
                if(x == 1) b[i] = 1;
                else{
                    ll y = x, first = 0, distinct = 0;
                    for(ll d = 2; d * d <= y; d++){
                        if(y % d == 0){
                            distinct++;
                            first = d;
                            while(y % d == 0) y = y / d;
                            if(distinct > 1) break;
                        }
                    }
                    if(y > 1){
                        distinct++;
                        if(distinct == 1) first = y;
                    }
                    if(distinct > 1) b[i] = -1;
                    else b[i] = first;
                }
            }
            ll bad = 0;
            for(ll i = 0; i < n; i++) if(b[i] == -1) bad = 1;
            if(bad) cout << "Alice" << endl;
            else if(is_sorted(b.begin(), b.end())) cout << "Bob" << endl;
            else cout << "Alice" << endl;
        }
    }
    return 0;
}
