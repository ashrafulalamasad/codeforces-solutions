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
        string s, t; cin >> s >> t;
        vector<ll> visited(n, 0), pending;
        bool possible = true;
        for(ll i = 0; i < n; i++){
            if(visited[i]){
                continue;
            }
            array<ll, 26> count{};
            pending.clear();
            pending.push_back(i);
            visited[i] = 1;
            for(ll j = 0; j < (ll)pending.size(); j++){
                ll position = pending[j];
                count[s[position] - 'a']++;
                count[t[position] - 'a']--;
                array<ll, 4> neighbors = {
                    position - k, position + k,
                    position - k - 1, position + k + 1
                };
                for(ll next : neighbors){
                    if(next >= 0 && next < n && !visited[next]){
                        visited[next] = 1;
                        pending.push_back(next);
                    }
                }
            }
            for(ll j = 0; j < 26; j++){
                if(count[j] != 0){
                    possible = false;
                    break;
                }
            }
            if(!possible){
                break;
            }
        }
        if(possible){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
