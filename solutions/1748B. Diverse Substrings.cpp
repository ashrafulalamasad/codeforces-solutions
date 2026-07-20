#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; string s; cin >> n >> s;
        for(ll i = 0; i < n; i++){
            ll freq[10] = {0}, distinct = 0, maxfreq = 0;
            for(ll j = i; j < n && j-i < 100; j++){
                ll d = s[j]-'0';
                if(freq[d] == 0) distinct++;
                freq[d]++;
                if(freq[d] > maxfreq) maxfreq = freq[d];
                if(maxfreq <= distinct) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
