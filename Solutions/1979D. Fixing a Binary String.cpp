#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, ans = -1; cin >> n >> k;
        string s; cin >> s;
        for(ll st = 0; st < 2; st++){
            string pat(n, '0');
            for(ll i = 0; i < n; i++){
                if(((i / k) % 2) == st) pat[i] = '1';
            }
            string rev = pat;
            reverse(rev.begin(), rev.end());
            ll pre = 0;
            while(pre < n && s[pre] == rev[pre]) pre++;
            string comb = pat + '#' + s;
            ll tot = (ll)comb.size();
            vector<ll> z(tot, 0);
            ll left = 0, right = 0;
            for(ll i = 1; i < tot; i++){
                if(i <= right) z[i] = min(right - i + 1, z[i - left]);
                while(i + z[i] < tot && comb[z[i]] == comb[i + z[i]]) z[i]++;
                if(i + z[i] - 1 > right){
                    left = i;
                    right = i + z[i] - 1;
                }
            }
            for(ll p = 1; p <= pre; p++){
                if(p == n || z[n + 1 + p] >= n - p){
                    ans = p;
                    break;
                }
            }
            if(ans != -1) break;
        }
        cout << ans << endl;
    }
    return 0;
}
