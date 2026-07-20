#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s;
        bool x = false;
        for(ll i = 0; i < n && !x; i++){
            if(s[i] != 'A') continue;
            ll a = i + 1;
            bool ok = true;
            for(ll j = 0; j < n; j++){
                if(s[j] != 'B') continue;
                ll b = j + 1;
                bool beat = (b == 1 && a == n) || (b > a && !(a == 1 && b == n));
                if(beat){
                    ok = false;
                    break;
                }
            }
            if(ok) x = true;
        }
        cout << (x ? "Alice" : "Bob") << endl;
    }
    return 0;
}
