#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; string s; cin >> n >> k >> s;
        ll run = 0; bool bad = false;
        for(ll i = 0; i < n; i++){
            if(s[i] == '1') run++; else run = 0;
            if(run >= k) bad = true;
        }
        if(bad) cout << "NO" << endl;
        else{
            ll c = 0;
            for(ll i = 0; i < n; i++) if(s[i] == '1') c++;
            cout << "YES" << endl;
            ll one = 1, zero = c + 1;
            for(ll i = 0; i < n; i++){
                if(s[i] == '1') cout << one++ << " ";
                else cout << zero++ << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
