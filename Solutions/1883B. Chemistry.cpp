#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        string s; cin >> s;
        ll cnt[26] = {};
        for(ll i = 0; i < n; i++) cnt[s[i] - 'a']++;
        ll odd = 0;
        for(ll i = 0; i < 26; i++) if(cnt[i] % 2 == 1) odd++;
        if(k >= max(0LL, odd - 1)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
