#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, m, dis = 0, cnt = 0; cin >> n >> k >> m;
        string s, res = ""; cin >> s;
        vector<ll> freq(k, 0);
        for(ll i = 0; i < m; i++){
            ll idx = s[i] - 'a';
            if(freq[idx] == 0){
                freq[idx] = 1;
                dis++;
            }
            if(dis == k){
                res.push_back(s[i]);
                cnt++;
                for(ll j = 0; j < k; j++) freq[j] = 0;
                dis = 0;
            }
        }
        if(cnt >= n) cout << "YES" << endl;
        else{
            cout << "NO" << endl;
            ll miss = 0;
            for(ll j = 0; j < k; j++){
                if(freq[j] == 0){
                    miss = j;
                    break;
                }
            }
            res.push_back('a' + miss);
            for(ll j = cnt + 1; j < n; j++) res.push_back('a');
            cout << res << endl;
        }
    }
    return 0;
}
