#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, z = 0; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) if(a[i] == 0) z++;
        if(z == 1) cout << "NO" << endl; else{
            cout << "YES" << endl;
            string s = ""; ll seen = 0;
            for(ll i = 0; i < n; i++){
                if(a[i] != 0) s = s + "A";
                if(a[i] == 0 && seen == 1) s = s + "B";
                if(a[i] == 0 && seen == 0){
                    s = s + "C";
                    seen = 1;
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}
