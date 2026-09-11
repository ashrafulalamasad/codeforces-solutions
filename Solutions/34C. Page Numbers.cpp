#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s; ll cur = 0;
    vector<ll> v, has(1001, 0);
    for(ll i = 0; i <= s.size(); i++){
        if(i == s.size() || s[i] == ','){
            has[cur] = 1;
            cur = 0;
        }else{
            cur = cur * 10 + (s[i] - '0');
        }
    }
    for(ll i = 1; i <= 1000; i++){
        if(has[i] == 1) v.push_back(i);
    }
    for(ll i = 0; i < v.size(); i++){
        ll j = i;
        while(j + 1 < v.size() && v[j + 1] == v[j] + 1){
            j++;
        }
        if(i > 0) cout << ",";
        if(i == j){
            cout << v[i];
        }else{
            cout << v[i] << "-" << v[j];
        }
        i = j;
    }
    cout << endl;
    return 0;
}
