#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k; cin >> n >> m >> k;
        vector<ll> missing(m), known(k);
        for(ll i = 0; i < m; i++) cin >> missing[i];
        for(ll i = 0; i < k; i++) cin >> known[i];
        vector<bool> is_known(n + 1, false);
        for(ll x : known) is_known[x] = true;
        string answer;
        if(k == n){
            answer = string(m, '1');
        }else if(k < n - 1){
            answer = string(m, '0');
        }else{
            for(ll x : missing){
                answer += is_known[x] ? '0' : '1';
            }
        }
        cout << answer << endl;
    }
    return 0;
}
