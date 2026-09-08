#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<ll> zFunction(const string& s){
    ll n = s.size(), left = 0, right = 0;
    vector<ll> z(n);
    for(ll i = 1; i < n; i++){
        if(i <= right) z[i] = min(right - i + 1, z[i - left]);
        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) z[i]++;
        if(i + z[i] - 1 > right){
            left = i;
            right = i + z[i] - 1;
        }
    }
    return z;
}

int main()
{
    fast;
    ll n, k; string s; cin >> n >> k >> s;
    vector<ll> z = zFunction(s); ll length = 1;
    for(ll i = 1; i < n; i++){
        if(s[i] > s[i % length]) break;
        if(s[i] < s[i % length]){
            length = i + 1;
            continue;
        }
        ll offset = i - length + 1;
        if(offset == length){
            length = i + 1;
            continue;
        }
        if(z[offset] < length - offset){
            if(length + offset + z[offset] >= k || s[offset + z[offset]] > s[z[offset]]) length = i + 1;
        }else if(z[length - offset] < offset){
            if(2 * length + z[length - offset] >= k || s[length - offset + z[length - offset]] < s[z[length - offset]]) length = i + 1;
        }else{
            length = i + 1;
        }
    }
    for(ll i = 0; i < k; i++) cout << s[i % length];
    cout << endl;
    return 0;
}
