#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> b(n), v;
        for(ll i = 0; i < n; i++){
            cin >> b[i];
        }
        v = b;
        sort(v.begin(), v.end());
        if(v[0] != 0){
            cout << -1 << endl;
            continue;
        }
        vector<ll> d, c;
        for(ll i = 0; i < n; ){
            ll j = i;
            while(j < n && v[j] == v[i]){
                j++;
            }
            d.push_back(v[i]);
            c.push_back(j - i);
            i = j;
        }
        ll k = (ll)d.size();
        vector<ll> a(k);
        bool ok = true;
        if(k == 1){
            a[0] = 1;
        }else{
            for(ll i = 0; i + 1 < k; i++){
                ll diff = d[i + 1] - d[i];
                if(diff <= 0 || diff % c[i] != 0){
                    ok = false;
                    break;
                }
                a[i] = diff / c[i];
                if(a[i] <= 0 || (i > 0 && a[i] <= a[i - 1])){
                    ok = false;
                    break;
                }
            }
            if(ok){
                a[k - 1] = a[k - 2] + 1;
            }
        }
        if(!ok){
            cout << -1 << endl;
            continue;
        }
        for(ll i = 0; i < n; i++){
            ll id = lower_bound(d.begin(), d.end(), b[i]) - d.begin();
            if(i){
                cout << " ";
            }
            cout << a[id];
        }
        cout << endl;
    }
    return 0;
}
