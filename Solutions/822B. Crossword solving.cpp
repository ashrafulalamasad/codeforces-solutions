#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    ll best = n + 1, start = 0;
    for(ll i = 0; i <= m - n; i++){
        ll count = 0;
        for(ll j = 0; j < n; j++){
            if(s[j] != t[i + j]){
                count++;
            }
        }
        if(count < best){
            best = count;
            start = i;
        }
    }
    cout << best << endl;
    bool first = true;
    for(ll i = 0; i < n; i++){
        if(s[i] != t[start + i]){
            if(!first){
                cout << " ";
            }
            cout << i + 1;
            first = false;
        }
    }
    cout << endl;
    return 0;
}
