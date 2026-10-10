#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    vector<string> s(n), left, right;
    set<string> dict; string mid;
    for(ll i = 0; i < n; i++){
        cin >> s[i];
        dict.insert(s[i]);
    }
    for(ll i = 0; i < n; i++){
        string t = s[i];
        reverse(t.begin(), t.end());
        if(t == s[i]) mid = t;
        else if(dict.find(t) != dict.end()){
            left.push_back(s[i]);
            right.push_back(t);
            dict.erase(s[i]);
            dict.erase(t);
        }
    }
    cout << left.size() * m * 2 + mid.size() << endl;
    for(ll i = 0; i < left.size(); i++) cout << left[i];
    cout << mid;
    reverse(right.begin(), right.end());
    for(ll i = 0; i < right.size(); i++) cout << right[i];
    cout << endl;
    return 0;
}
