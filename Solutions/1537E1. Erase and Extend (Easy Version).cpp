#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string build(const string& prefix, ll k){
    string answer;
    for(ll i = 0; i < k; i++) answer += prefix[i % prefix.size()];
    return answer;
}

int main()
{
    fast;
    ll n, k; string s; cin >> n >> k >> s;
    string prefix(1, s[0]);
    string answer = build(prefix, k);
    for(ll i = 1; i < n; i++){
        if(s[i] > s[0]) break;
        prefix += s[i];
        answer = min(answer, build(prefix, k));
    }
    cout << answer << endl;
    return 0;
}
