#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    unordered_map<string, ll>mp;
    string s;
    while(n--){
        cin >> s;
        if(mp[s]==0){
            cout << "OK" << endl;
            mp[s] = 1;
        }else{
            cout << s << mp[s] << endl;
            mp[s]++;
        }
    }
    return 0;
}
