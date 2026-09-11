#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll p; string w; cin >> w >> p;
        ll n = w.size(), total = 0;
        vector<ll> cnt(26, 0);
        for(ll i = 0; i < n; i++){
            total += w[i] - 'a' + 1;
            cnt[w[i] - 'a']++;
        }
        for(ll c = 25; c >= 0; c--){
            while(total > p && cnt[c] > 0){
                total -= c + 1;
                cnt[c]--;
            }
        }
        for(ll i = 0; i < n; i++){
            if(cnt[w[i] - 'a'] > 0){
                cnt[w[i] - 'a']--;
                cout << w[i];
            }
        }
        cout << endl;
    }
    return 0;
}
