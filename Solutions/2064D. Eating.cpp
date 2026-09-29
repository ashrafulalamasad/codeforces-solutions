#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll bits = 30;
    tc{
        ll n, q; cin >> n >> q; vector<ll> a(n), prefix(n + 1, 0);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            prefix[i + 1] = prefix[i] ^ a[i];
        }
        vector<array<ll, 30>> last(n);
        for(ll i = 0; i < n; i++){
            if(i > 0) last[i] = last[i - 1];
            else last[i].fill(-1);
            last[i][__lg(a[i])] = i;
            for(ll bit = bits - 2; bit >= 0; bit--) last[i][bit] = max(last[i][bit], last[i][bit + 1]);
        }
        while(q--){
            ll x; cin >> x; ll index = n - 1;
            while(index >= 0 && x > 0){
                ll bit = __lg(x), next = last[index][bit];
                x ^= prefix[index + 1] ^ prefix[next + 1];
                index = next;
                if(next == -1 || a[next] > x) break;
                x ^= a[next];
                index--;
            }
            cout << n - index - 1 << endl;
        }
    }
    return 0;
}
