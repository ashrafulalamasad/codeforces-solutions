#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int MAXNODES = 1500 * 1500 + 10;
int trie[MAXNODES][26];
int trie_cnt = 1;

int main()
{
    fast;
    string s; cin >> s;
    string good; cin >> good;
    ll k; cin >> k;
    vector<bool> is_bad(26);
    for(ll i = 0; i < 26; i++) is_bad[i] = good[i] == '0';
    ll n = s.size();
    vector<ll> pref(n + 1, 0);
    for(ll i = 0; i < n; i++)
        pref[i + 1] = pref[i] + is_bad[s[i] - 'a'];
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        int node = 0;
        for(ll j = i; j < n; j++){
            ll bad = pref[j + 1] - pref[i];
            if(bad > k) break;
            int c = s[j] - 'a';
            if(!trie[node][c]){
                trie[node][c] = trie_cnt++;
                ans++;
            }
            node = trie[node][c];
        }
    }
    cout << ans << endl;
    return 0;
}
