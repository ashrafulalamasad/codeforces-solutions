#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s; ll n = s.size();
        vector<ll> pref2(n + 1), suff13(n + 1);
        for(ll i = 0; i < n; i++){
            pref2[i + 1] = pref2[i] + (s[i] == '2');
        }
        for(ll i = n - 1; i >= 0; i--){
            suff13[i] = suff13[i + 1] + (s[i] == '1' || s[i] == '3');
        }
        ll best = 0;
        for(ll i = 0; i <= n; i++){
            best = max(best, pref2[i] + suff13[i]);
        }
        cout << n - best << endl;
    }
    return 0;
}
