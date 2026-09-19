#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        ll n = s.size(), pos = -1;
        for(ll i = 0; i < n; i++) if(s[i] == 'a') pos = i;
        if(pos == -1){
            cout << "NO" << endl;
            continue;
        }
        ll l = pos, r = pos; bool ok = true;
        for(ll c = 1; c < n; c++){
            ll p = -1;
            for(ll i = 0; i < n; i++) if(s[i] == 'a' + c) p = i;
            if(p == -1 || (p != l - 1 && p != r + 1)) ok = false;
            else{
                l = min(l, p);
                r = max(r, p);
            }
            if(!ok) break;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
