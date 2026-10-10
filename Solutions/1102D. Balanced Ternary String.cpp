#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; string s; cin >> n >> s;
    ll need = n / 3; vector<ll> cnt(3, 0);
    for(ll i = 0; i < n; i++) cnt[s[i] - '0']++;
    for(ll i = 0; i < n; i++){
        if(cnt[0] < need && s[i] > '0' && cnt[s[i] - '0'] > need){
            cnt[s[i] - '0']--;
            cnt[0]++;
            s[i] = '0';
        }
    }
    for(ll i = 0; i < n; i++){
        if(cnt[1] < need && s[i] > '1' && cnt[s[i] - '0'] > need){
            cnt[s[i] - '0']--;
            cnt[1]++;
            s[i] = '1';
        }
    }
    for(ll i = n - 1; i >= 0; i--){
        if(cnt[2] < need && s[i] < '2' && cnt[s[i] - '0'] > need){
            cnt[s[i] - '0']--;
            cnt[2]++;
            s[i] = '2';
        }
    }
    for(ll i = n - 1; i >= 0; i--){
        if(cnt[1] < need && s[i] < '1' && cnt[s[i] - '0'] > need){
            cnt[s[i] - '0']--;
            cnt[1]++;
            s[i] = '1';
        }
    }
    cout << s << endl;
    return 0;
}
