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
        vector<ll> z(n + 1), o(n + 1);
        for(ll i = 0; i < n; i++){
            z[i + 1] = z[i] + (s[i] == '0');
            o[i + 1] = o[i] + (s[i] == '1');
        }
        ll best = 0, bd = 2 * n + 1;
        for(ll i = 0; i <= n; i++){
            if(z[i] >= (i + 1) / 2 && o[n] - o[i] >= (n - i + 1) / 2){
                ll d = abs(n - 2 * i);
                if(d < bd){
                    bd = d; best = i;
                }
            }
        }
        cout << best << endl;
    }
    return 0;
}
