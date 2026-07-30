#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    map<string,ll> cnt;
    for(ll i = 0; i < n; i++){
        string s; cin >> s;
        cnt[s]++;
    }
    string win;
    ll mx = 0;
    for(auto &p : cnt){
        if(p.second > mx){
            mx = p.second;
            win = p.first;
        }
    }
    cout << win << endl;
    return 0;
}
